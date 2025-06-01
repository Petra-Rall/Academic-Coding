SELECT department_id, job_id, employee_id, AVG(salary) AS AVG_SAL --we can only take attributes in SELECTION 
                                                                  --if we put them in GROUP BY function(When GROUP BY is present)
FROM hr.employees
WHERE job_id NOT LIKE '%REP%' 
    HAVING AVG_SAL > 13000     --AND (AVG(salary) > 13000) does not work because of grouping, we need to use 'having'
GROUP BY department_id, job_id --super is before sub, here it is grouped by department id and job_id is ordered for each department
ORDER BY department_id, AVG_SAL DESC;
