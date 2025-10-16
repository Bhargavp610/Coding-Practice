-- Select the largest LAT_N that is less than 137.2345
-- Round the result to 4 decimal places for precision
-- LIMIT 1 ensures only the single greatest value is returned

SELECT ROUND(LAT_N,4) 
FROM STATION
WHERE LAT_N < 137.2345
ORDER BY LAT_N DESC
LIMIT 1;
