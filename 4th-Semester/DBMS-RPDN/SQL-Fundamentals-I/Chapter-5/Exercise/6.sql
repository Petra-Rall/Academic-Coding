SELECT job_id, COUNT(*)
FROM hr.employees
GROUP BY job_id;

SELECT '&job_id', COUNT(*)
FROM hr.employees
GROUP BY job_id