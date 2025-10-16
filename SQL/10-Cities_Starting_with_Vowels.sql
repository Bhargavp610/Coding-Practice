-- Query CITY names that start with vowels (a, e, i, o, u)
-- Convert to lowercase to ensure case-insensitive matching
-- Avoid duplicates in the result

SELECT DISTINCT CITY
FROM STATION
WHERE LOWER(SUBSTRING(CITY, 1, 1)) IN ('a', 'e', 'i', 'o', 'u');
