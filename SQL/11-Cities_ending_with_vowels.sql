-- Select CITY names that end with vowels
-- RIGHT() extracts the last character
-- DISTINCT ensures no duplicates

SELECT DISTINCT CITY
FROM STATION
WHERE LOWER(RIGHT(CITY, 1)) IN ('a', 'e', 'i', 'o', 'u');
