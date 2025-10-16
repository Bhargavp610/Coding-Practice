-- Select CITY names that do NOT end with vowels
-- NOT IN excludes vowels from last character
-- DISTINCT removes duplicate cities

SELECT DISTINCT CITY 
FROM STATION
WHERE LOWER(RIGHT(CITY, 1)) NOT IN ('a', 'e', 'i', 'o', 'u');
