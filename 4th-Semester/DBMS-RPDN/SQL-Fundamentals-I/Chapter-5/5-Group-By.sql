SELECT department_id, AVG(salary)
FROM hr.employees
GROUP BY department_id ;

-- • If you include a group function in a SELECT clause, you cannot select individual results as well,
--   unless the individual column appears in the GROUP BY clause. You receive an error message if
--   you fail to include the column list in the GROUP BY clause.
-- • Using a WHERE clause, you can exclude rows before dividing them into groups.
-- • You must include the columns in the GROUP BY clause.
-- • You cannot use a column alias in the GROUP BY clause.

SELECT AVG(salary)
FROM hr.employees
GROUP BY department_id ;

SELECT department_id, AVG(salary)
FROM hr.employees
GROUP BY department_id
ORDER BY AVG(salary);

-- The GROUP BY column does not have to be 
--in the SELECT clause.

------------------------------------------------
-- Grouping by More than One Column:

SELECT department_id, job_id, sum(salary)
FROM hr.employees
GROUP BY department_id, job_id
ORDER BY job_id;

SELECT department_id, job_id, SUM(salary)
FROM employees
WHERE department_id > 40
GROUP BY department_id, job_id
ORDER BY department_id;

-------------------------------------------------
--Illegal queries using Group Functions:

                   ---1---
-- Illegal:
SELECT department_id, COUNT(last_name)
FROM hr.employees;
-- A GROUP BY clause must be added to
-- count the last names for each department_id.

                ----2----
-- Illegal:                
SELECT department_id, job_id, COUNT(last_name)
FROM employees
GROUP BY department_id;
-- Either add job_id in the GROUP BY or
-- remove the job_id column from the SELECT list.

               ---- 3 -----
-- Illegal:               
SELECT department_id, AVG(salary)
FROM employees
WHERE AVG(salary) > 8000
GROUP BY department_id;

-- Correct:
SELECT department_id, AVG(salary)
FROM employees
GROUP BY department_id
HAVING AVG(salary) > 8000;

-- Correct:
SELECT department_id, MAX(salary)
FROM employees
GROUP BY department_id
HAVING MAX(salary)>10000 ;

-- Correct:
SELECT job_id, SUM(salary) PAYROLL
FROM employees
WHERE job_id NOT LIKE '%REP%'
GROUP BY job_id
HAVING SUM(salary) > 13000
ORDER BY SUM(salary);

-- • You cannot use the WHERE clause to restrict groups.
-- • You use the HAVING clause to restrict groups.
-- • You cannot use group functions in the WHERE clause.
