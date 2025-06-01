SELECT  job_id, ROUND(MAX(salary)) AS Maximum,
                ROUND(MIN(salary)) AS Minimum, 
                ROUND(SUM(salary)) AS Sum, 
                ROUND(AVG(salary)) AS Average
FROM hr.employees
GROUP BY job_id