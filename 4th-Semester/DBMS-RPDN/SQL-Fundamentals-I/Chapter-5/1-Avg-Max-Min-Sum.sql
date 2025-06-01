SELECT ROUND(AVG(salary)), MAX(salary), MIN(salary), SUM(salary)
FROM hr.employees
WHERE job_id LIKE '%REP%';

SELECT MIN(hire_date), MAX(hire_date)
FROM hr.employees;

SELECT MIN(last_name), MAX(last_name)
FROM hr.employees;

--You can use the MAX and MIN functions for 
--numeric, character, and date data types.

--Note: The AVG, SUM, VARIANCE, and STDDEV functions can be used only with numeric data types.
--      MAX and MIN cannot be used with LOB or LONG data types.