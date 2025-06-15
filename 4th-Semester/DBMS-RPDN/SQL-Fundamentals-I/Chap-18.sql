-------------1----------------
SELECT last_name, department_id, salary
FROM hr.employees
WHERE (salary, department_id) IN
        (SELECT salary, department_id
        FROM hr.employees
        WHERE commission_pct IS NOT NULL);

--------------2-----------------

SELECT last_name, department_name, salary
FROM hr.employees e, hr.departments d
WHERE e.department_id = d.department_id
AND (salary, NVL(commission_pct,0)) IN
        (SELECT salary, NVL(commission_pct,0)
        FROM hr.employees e, hr.departments d
        WHERE e.department_id = d.department_id
        AND d.location_id = 1700);

-------------3-----------------

SELECT last_name, hire_date, salary
FROM hr.employees
WHERE (salary, NVL(commission_pct,0)) IN
        (SELECT salary, NVL(commission_pct,0)
        FROM hr.employees
        WHERE last_name = 'Taylor')
AND last_name != 'Taylor';

-------------4----------------
SELECT last_name, job_id, salary
FROM hr.employees
WHERE salary > ALL
        (SELECT salary
        FROM hr.employees
        WHERE job_id = 'SA_MAN')
ORDER BY salary DESC;

-----------5-----------------
SELECT employee_id, last_name, department_id
FROM hr.employees
WHERE department_id IN (SELECT department_id
                        FROM hr.departments
                        WHERE location_id IN
                            (SELECT location_id
                            FROM hr.locations
                            WHERE city LIKE 'T%'));

----------6--------------

SELECT e.last_name ename, e.salary salary,
e.department_id deptno, ROUND(AVG(a.salary)) dept_avg
FROM hr.employees e, hr.employees a
WHERE e.department_id = a.department_id
AND e.salary > (SELECT ROUND(AVG(salary))
                FROM hr.employees
                WHERE department_id = e.department_id )
GROUP BY e.last_name, e.salary, e.department_id
ORDER BY ROUND(AVG(a.salary));

---------------7---------------
--a
SELECT outer.last_name
FROM hr.employees outer
WHERE NOT EXISTS (SELECT 'X'
                  FROM hr.employees inner
                  WHERE inner.manager_id =
                        outer.employee_id);

--b

SELECT outer.last_name
FROM hr.employees outer
WHERE outer.employee_id
NOT IN (SELECT inner.manager_id
        FROM hr.employees inner);

--This alternative solution is not a good one. The subquery picks up a NULL value, so the entire
--query returns no rows. The reason is that all conditions that compare a NULL value result in
--NULL. Whenever NULL values are likely to be part of the value set, do not use NOT IN as a
--substitute for NOT EXISTS.

----------------8------------
SELECT last_name
FROM hr.employees outer
WHERE outer.salary < (SELECT AVG(inner.salary)
                      FROM hr.employees inner
                      WHERE inner.department_id
                            = outer.department_id);

------------9---------------
SELECT last_name
FROM hr.employees outer
WHERE EXISTS (SELECT 'X'
              FROM hr.employees inner
              WHERE inner.department_id =
                    outer.department_id
              AND inner.hire_date > outer.hire_date
              AND inner.salary > outer.salary);

-------------10------------

SELECT employee_id, last_name,
        (SELECT department_name
        FROM hr.departments d
        WHERE e.department_id =
              d.department_id ) department
FROM hr.employees e
ORDER BY department;

---------------11---------------

WITH
    summary AS (
    SELECT department_name, SUM(salary) AS dept_total
    FROM hr.employees e, hr.departments d
    WHERE e.department_id =
          d.department_id
    GROUP BY department_name)
    SELECT department_name, dept_total
    FROM summary
    WHERE dept_total > (
                        SELECT SUM(dept_total) * 1/8
                        FROM summary)
    ORDER BY dept_total DESC;