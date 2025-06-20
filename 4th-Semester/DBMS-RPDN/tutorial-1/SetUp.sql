CONNECT sys/annoying@localhost:1521/FREE AS SYSDBA;
SHOW CON_NAME;
ALTER SESSION SET CONTAINER = FREE;
SELECT name, open_mode FROM v$pdbs;
ALTER SESSION SET CONTAINER = FREEPDB1;
CREATE USER drug_schema IDENTIFIED BY annoying;
GRANT CONNECT, RESOURCE TO drug_schema;
GRANT CREATE SESSION, CREATE TABLE, CREATE VIEW, CREATE SEQUENCE, CREATE PROCEDURE TO drug_schema;
ALTER USER drug_schema DEFAULT TABLESPACE users TEMPORARY TABLESPACE temp;
ALTER USER drug_schema QUOTA UNLIMITED ON USERS;
