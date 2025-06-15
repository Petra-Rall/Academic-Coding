------------------- 1 -------------------------
SELECT last_name, hire_date
FROM hr.employees
WHERE department_id = (
    SELECT department_id
    FROM hr.employees
    WHERE last_name = '&last_name'
)
AND last_name != '&last_name';


------------------- 2 -------------------------

SELECT employee_id, last_name, salary
FROM hr.employees
WHERE salary > (SELECT AVG(salary)
                from hr.employees
                )
ORDER BY salary;

------------------- 3 -------------------------

SELECT employee_id, last_name
from hr.employees
WHERE department_id IN (SELECT department_id
                        from hr.employees
                        WHERE last_name LIKE '%u%'
                        );

------------------- 4 -------------------------

SELECT e.last_name, e.department_id, e.job_id
FROM hr.employees e
JOIN hr.departments d
  ON (e.department_id = d.department_id)
WHERE d.location_id = 1700;

------------------- 5 -------------------------

SELECT last_name, salary
FROM hr.employees
WHERE manager_id = (SELECT employee_id
                    FROM hr.employees
                    WHERE last_name = 'King'
                        AND job_id = 'AD_PRES'
                    );

------------------- 6 -------------------------

SELECT department_id, last_name, job_id
FROM hr.employees
WHERE department_id = (SELECT department_id
                       FROM hr.departments
                       WHERE department_name = 'Executive'
                       );

------------------- 7 -------------------------

SELECT employee_id, last_name, salary
from hr.employees
WHERE department_id IN (SELECT department_id
                        FROM hr.employees
                        WHERE last_name LIKE '%u%'
                        )
AND salary > (SELECT AVG(salary)
              FROM hr.employees
              );