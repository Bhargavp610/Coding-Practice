-- Select CITY names where both first and last characters are vowels
-- LEFT() checks first character, RIGHT() checks last
-- DISTINCT avoids duplicate results

SELECT DISTINCT CITY
FROM STATION
WHERE LOWER(RIGHT(CITY, 1)) IN ('a', 'e', 'i', 'o', 'u') AND 
      LOWER(LEFT(CITY, 1)) IN ('a', 'e', 'i', 'o', 'u');
