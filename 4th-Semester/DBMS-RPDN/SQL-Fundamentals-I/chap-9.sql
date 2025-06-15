---------------1--------------------
CREATE TABLE DEPT
    (id NUMBER(7),
    name VARCHAR(25));

DESCRIBE dept;
---------------2--------------------
INSERt INTO dept
    SELECT department_id, department_name
    FROM departments;

---------------3--------------------
CREATE TABLE EMP
    (id NUMBER(7),
    last_name VARCHAR2(25),
    first_name VARCHAR2(25),
    dept_id NUMBER(7));

DESCRIBE emp;
---------------4--------------------
ALTER TABLE emp
MODIFY (last_name VARCHAR2(50));

DESCRIBE emp;
---------------5--------------------
SELECT table_name
FROM user_tables
WHERE table_name IN ('DEPT', 'EMP');
---------------6--------------------
CREATE TABLE employees2 AS
SELECT employee_id id, first_name, last_name, salary, department_id dept_id
FROM hr.employees;
---------------7--------------------
DROP TABLE emp;
---------------8--------------------
RENAME employees2 TO emp;

---------------9--------------------
COMMENT ON TABLE emp IS 'Employee Information';
COMMENT ON TABLE dept IS 'Department Information';
SELECT *
FROM user_tab_comments
WHERE table_name = 'DEPT'
OR table_name = 'EMP';
---------------10--------------------
ALTER TABLE emp
DROP COLUMN first_name;

DESCRIBE emp;
---------------11--------------------
ALTER TABLE emp
SET UNUSED (dept_id);
DESCRIBE emp;
---------------12--------------------
ALTER TABLE emp
DROP UNUSED COLUMNS;
DESCRIBE emp;