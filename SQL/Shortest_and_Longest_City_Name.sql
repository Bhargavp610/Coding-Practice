-- Query the two cities in STATION with the shortest and longest CITY names
-- If there are ties, choose the city that comes first alphabetically

(
  SELECT CITY, LENGTH(CITY)
  FROM STATION
  ORDER BY LENGTH(CITY), CITY
  LIMIT 1
)
UNION
(
  SELECT CITY, LENGTH(CITY)
  FROM STATION
  ORDER BY LENGTH(CITY) DESC, CITY
  LIMIT 1
);
