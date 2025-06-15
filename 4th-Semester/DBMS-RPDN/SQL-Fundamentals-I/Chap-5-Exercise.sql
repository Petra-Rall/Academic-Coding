---------------------1-------------------------

-- 1: True

---------------------2-------------------------

-- 2: False

---------------------3-------------------------

-- 3 : True

---------------------4-------------------------

SELECT  ROUND(MAX(salary)) AS Maximum,
        ROUND(MIN(salary)) AS Minimum, 
        ROUND(SUM(salary)) AS Sum, 
        ROUND(AVG(salary)) AS Average
FROM hr.employees;

---------------------5-------------------------

SELECT  job_id, ROUND(MAX(salary)) AS Maximum,
                ROUND(MIN(salary)) AS Minimum, 
                ROUND(SUM(salary)) AS Sum, 
                ROUND(AVG(salary)) AS Average
FROM hr.employees
GROUP BY job_id;

---------------------6-------------------------

SELECT job_id, COUNT(*)
FROM hr.employees
GROUP BY job_id;

SELECT job_id, COUNT(*) AS employee_count
FROM hr.employees
WHERE job_id = '&job_id'
GROUP BY job_id;

---------------------7-------------------------

SELECT COUNT(DISTINCT manager_id) AS "Number of Managers"
FROM hr.employees;

---------------------8-------------------------

SELECT (MAX(salary) - MIN(salary)) AS DIFFERENCE
FROM hr.employees;

----------------------9-------------------------

SELECT manager_id, MIN(salary)
FROM hr.employees
WHERE manager_id IS NOT NULL
GROUP BY manager_id
HAVING MIN(salary) > 6000
ORDER BY MIN(salary) DESC;

----------------------10-------------------------

SELECT 
  COUNT(*) AS total_employees,
  SUM(CASE WHEN TO_CHAR(hire_date, 'YYYY') = '2015' THEN 1 ELSE 0 END) AS "2015",
  SUM(CASE WHEN TO_CHAR(hire_date, 'YYYY') = '2016' THEN 1 ELSE 0 END) AS "2016",
  SUM(CASE WHEN TO_CHAR(hire_date, 'YYYY') = '2017' THEN 1 ELSE 0 END) AS "2017",
  SUM(CASE WHEN TO_CHAR(hire_date, 'YYYY') = '2018' THEN 1 ELSE 0 END) AS "2018"
FROM hr.employees;

----------------------11-------------------------
SELECT 
    job_id, 
    SUM(DECODE(department_id, 20, salary, 0)) AS "Dept 20",
    SUM(DECODE(department_id, 50, salary, 0)) AS "Dept 50",
    SUM(DECODE(department_id, 80, salary, 0)) AS "Dept 80",
    SUM(DECODE(department_id, 90, salary, 0)) AS "Dept 90",
    SUM(salary) AS "Total"
FROM hr.employees
GROUP BY job_id;

