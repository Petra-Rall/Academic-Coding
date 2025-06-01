SELECT AVG(commission_pct)
FROM hr.employees;

SELECT AVG(NVL(commission_pct, 0))
FROM hr.employees;

--The NVL function forces group functions 
--to include null values (divided by all employee num 
--unlike not using NVL, so value is less than before)