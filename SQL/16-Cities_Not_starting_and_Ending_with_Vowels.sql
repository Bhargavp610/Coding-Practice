-- Select CITY names where both the first and last characters are NOT vowels
-- DISTINCT removes duplicates

SELECT DISTINCT CITY 
FROM STATION
WHERE LOWER(LEFT(CITY, 1)) NOT IN ('a', 'e', 'i', 'o', 'u')
  AND LOWER(RIGHT(CITY, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');
