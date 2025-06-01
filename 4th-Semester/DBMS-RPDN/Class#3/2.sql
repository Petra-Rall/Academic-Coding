SELECT last_name, department_id
FROM hr.EMPLOYEES  
WHERE department_id IN (SELECT department_id     -- Sub query
                       FROM hr.EMPLOYEES
                       WHERE last_name = 'King') -- '=' for when it returns one value, IN for when it returns multiple values
                                                 