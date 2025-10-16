-- Select CITY names that do NOT start with vowels
-- NOT IN excludes vowels from the first character
-- DISTINCT avoids repetition

SELECT DISTINCT CITY 
FROM STATION
WHERE LOWER(LEFT(CITY, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');
