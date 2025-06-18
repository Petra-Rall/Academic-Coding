SELECT * FROM Product;
SELECT * FROM Conditions;
SELECT * FROM ClinicalTrial;
SELECT * FROM Address;
SELECT * FROM Product;
SELECT * FROM Disease;
SELECT * FROM InteractWith;
SELECT * FROM SideEffects;
SELECT * FROM Drug;
SELECT * FROM DrugFULLINFO;

--a) Find the number of drugs that have nausea as a side effect

SELECT COUNT(DISTINCT se.drug_id) AS num_drugs_with_nausea
FROM SideEffects se
WHERE LOWER(se.side_effect) = 'nausea';

--b) Find the drugs that interact with butabarbital

SELECT DISTINCT d.drug_name
FROM InteractWith iw
JOIN Drug d ON iw.drug_id = d.drug_id
WHERE LOWER(iw.interacts_with) = 'butabarbital';

--c) Find the drugs with side effects cough and headache

SELECT d.drug_name
FROM Drug d
JOIN SideEffects se 
ON d.drug_id = se.drug_id
WHERE LOWER(se.side_effect) IN ('cough', 'headache')
GROUP BY d.drug_id, d.drug_name
HAVING COUNT(DISTINCT LOWER(se.side_effect)) = 2;

--d) Find the drugs that can be used to treat endocrine diseases

SELECT DISTINCT d.drug_name
FROM Drug d
JOIN Disease dis ON d.drug_id = dis.drug_id
WHERE LOWER(dis.disease_category) LIKE '%endocrine%';


--e) Find the most common treatment for immunological diseases that have not been used for hematological diseases

WITH ImmunoDrugs AS (
    SELECT drug_id
    FROM Disease
    WHERE LOWER(disease_category) LIKE '%immunological%'
),
HemaDrugs AS (
    SELECT drug_id
    FROM Disease
    WHERE LOWER(disease_category) LIKE '%hematological%'
),
ImmunoOnlyDrugs AS (
    SELECT DISTINCT drug_id
    FROM ImmunoDrugs
    WHERE drug_id NOT IN (SELECT drug_id FROM HemaDrugs)
)
SELECT d.drug_name, COUNT(*) AS immuno_disease_count
FROM Disease dis
JOIN Drug d ON dis.drug_id = d.drug_id
WHERE dis.drug_id IN (SELECT drug_id FROM ImmunoOnlyDrugs)
  AND LOWER(dis.disease_category) LIKE '%immunological%'
GROUP BY d.drug_name
ORDER BY immuno_disease_count DESC
FETCH FIRST 1 ROW ONLY;


--f) Find the diseases that can be treated with hydrocortisone but not with etanercept

WITH HydrocortisoneDiseases AS (
    SELECT DISTINCT dis.disease_name
    FROM Disease dis
    JOIN Drug d ON dis.drug_id = d.drug_id
    WHERE LOWER(d.drug_name) = 'hydrocortisone'
),
EtanerceptDiseases AS (
    SELECT DISTINCT dis.disease_name
    FROM Disease dis
    JOIN Drug d ON dis.drug_id = d.drug_id
    WHERE LOWER(d.drug_name) = 'etanercept'
)
SELECT disease_name
FROM HydrocortisoneDiseases
WHERE disease_name NOT IN (SELECT disease_name FROM EtanerceptDiseases);


--g) Find the top-10 side effects that drugs used to treat asthma related diseases have

SELECT se.side_effect, COUNT(DISTINCT se.drug_id) AS drug_count
FROM SideEffects se
JOIN Disease dis ON se.drug_id = dis.drug_id
WHERE LOWER(dis.disease_name) LIKE '%asthma%'
GROUP BY se.side_effect
ORDER BY drug_count DESC
FETCH FIRST 10 ROWS ONLY;


--h) Find the drugs that have been studied in more than three clinical trials with more than 30 participants

SELECT d.drug_name, COUNT(ct.trial_id) AS num_trials
FROM ClinicalTrial ct
JOIN Drug d ON ct.drug_id = d.drug_id
WHERE ct.participants > 30
GROUP BY d.drug_name
HAVING COUNT(ct.trial_id) > 3;


--i) Find the largest number of clinical trials and the drugs they have studied that have been
-----active in the same period of timej) Find the main researchers that have conducted clinical trials that study drugs that can be
-----used to treat both respiratory and cardiovascular diseases

WITH TrialPeriods AS (
    SELECT trial_id, drug_id, start_date, completion_date
    FROM ClinicalTrial
    WHERE start_date IS NOT NULL AND completion_date IS NOT NULL
),
Overlaps AS (
    SELECT t1.trial_id AS trial1, t2.trial_id AS trial2
    FROM TrialPeriods t1
    JOIN TrialPeriods t2 ON t1.trial_id <> t2.trial_id
       AND t1.start_date <= t2.completion_date
       AND t2.start_date <= t1.completion_date
),
OverlapCounts AS (
    SELECT trial1, COUNT(DISTINCT trial2) + 1 AS overlap_count -- +1 for the trial itself
    FROM Overlaps
    GROUP BY trial1
),
MaxOverlap AS (
    SELECT MAX(overlap_count) AS max_count FROM OverlapCounts
)
SELECT d.drug_name, ct.trial_id, oc.overlap_count
FROM OverlapCounts oc
JOIN MaxOverlap mo ON oc.overlap_count = mo.max_count
JOIN ClinicalTrial ct ON ct.trial_id = oc.trial1
JOIN Drug d ON ct.drug_id = d.drug_id;


--k) Find up to three main researchers that have conductd the larger number of clinical trials
-----that study drugs that can be used to treat both respiratory and cardiovascular diseases

WITH RespiratoryDrugs AS (
    SELECT DISTINCT drug_id
    FROM Disease
    WHERE LOWER(disease_category) LIKE '%respiratory%'
),
CardiovascularDrugs AS (
    SELECT DISTINCT drug_id
    FROM Disease
    WHERE LOWER(disease_category) LIKE '%cardiovascular%'
),
BothCategoryDrugs AS (
    SELECT drug_id FROM RespiratoryDrugs
    INTERSECT
    SELECT drug_id FROM CardiovascularDrugs
)
SELECT DISTINCT ct.main_researcher_name
FROM ClinicalTrial ct
WHERE ct.drug_id IN (SELECT drug_id FROM BothCategoryDrugs)
  AND ct.main_researcher_name IS NOT NULL;


--l) Find the categories of drugs that have been only studied in clinical trials based in United States

WITH US_DrugTrials AS (
    SELECT DISTINCT ct.drug_id
    FROM ClinicalTrial ct
    JOIN Address a ON ct.address_id = a.address_id
    WHERE LOWER(a.country) = 'united states'
),
NonUS_DrugTrials AS (
    SELECT DISTINCT ct.drug_id
    FROM ClinicalTrial ct
    JOIN Address a ON ct.address_id = a.address_id
    WHERE LOWER(a.country) <> 'united states'
)
SELECT DISTINCT d.drug_category
FROM Drug d
WHERE d.drug_id IN (SELECT drug_id FROM US_DrugTrials)
  AND d.drug_id NOT IN (SELECT drug_id FROM NonUS_DrugTrials);
