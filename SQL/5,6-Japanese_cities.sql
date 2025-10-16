-- Approach: Queried all Japanese cities using WHERE filter on CountryCode
SELECT * FROM CITY
WHERE COUNTRYCODE = 'JPN';

-- just return the names of the cities
-- Approach: Queried only the NAME column for Japanese cities using WHERE filter
SELECT NAME FROM CITY
WHERE COUNTRYCODE = 'JPN';
