-- Approach: Used SELECT * with WHERE to filter USA cities over 100,000 population
SELECT * FROM CITY
WHERE COUNTRYCODE = 'USA'
AND POPULATION > 100000;