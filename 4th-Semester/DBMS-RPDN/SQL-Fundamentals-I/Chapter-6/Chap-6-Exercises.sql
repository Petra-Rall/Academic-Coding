------------------ 1 --------------------

SELECT location_id, street_address, city, state_province, country_name
FROM hr.locations
NATURAL JOIN hr.countries;

------------------ 2 ---------------------------

SELECT e.last_name,
       e.department_id,
       d.department_name
FROM hr.employees e
JOIN hr.departments d 
ON (e.department_id = d.department_id);


------------------- 3 -------------------------

SELECT last_name, job_id, department_id, department_name
FROM hr.employees
JOIN hr.departments USING (department_id)
JOIN hr.locations USING (location_id)
WHERE city = 'Toronto';

------------------- 4 -------------------------

SELECT emp.last_name AS Employee, 
       emp.employee_id AS EMP#, 
       mgr.last_name AS Manager, 
       mgr.employee_id AS Mgr#
FROM hr.employees emp
JOIN hr.employees mgr
ON (emp.manager_id = mgr.employee_id);

------------------- 5 -------------------------

SELECT emp.last_name AS Employee, 
       emp.employee_id AS EMP#, 
       mgr.last_name AS Manager, 
       mgr.employee_id AS Mgr#

FROM hr.employees emp
LEFT OUTER JOIN hr.employees mgr
ON (emp.manager_id = mgr.employee_id)
ORDER BY emp.employee_id;

------------------- 6 -------------------------

SELECT emp.department_id AS DEPARTMENT,
       emp.last_name AS EMPLOYEE,
       col.last_name AS COLLEAGUE
FROM hr.employees emp
JOIN hr.employees col
ON (emp.department_id = col.department_id)
ORDER BY emp.last_name;


------------------- 7 -------------------------

-- There's no job_grade table in the oracle livesql

------------------- 8 -------------------------

SELECT last_name, hire_date
from hr.employees
WHERE hire_date > (SELECT hire_date
                   FROM hr.employees
                   WHERE last_name = 'Davies'
                   );

------------------- 9 -------------------------

SELECT emp.last_name, 
       emp.hire_date, 
       mgr.last_name AS LAST_NAME_1, 
       mgr.hire_date AS HIRE_DATE_1
FROM hr.employees emp
JOIN hr.employees mgr 
ON (emp.manager_id = mgr.employee_id)
WHERE emp.hire_date < mgr.hire_date;