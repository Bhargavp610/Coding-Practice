-- Approach: Selected only the NAME column with WHERE filter for USA and population >120,000
SELECT NAME FROM CITY
WHERE COUNTRYCODE = 'USA'
AND POPULATION > 120000;