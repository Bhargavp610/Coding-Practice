-- Select LONG_W corresponding to the largest LAT_N under 137.2345
-- Round to 4 decimal places
-- ORDER BY LAT_N DESC ensures we get the largest LAT_N first

SELECT ROUND(LONG_W,4) 
FROM STATION
WHERE LAT_N < 137.2345
ORDER BY LAT_N DESC
LIMIT 1;
