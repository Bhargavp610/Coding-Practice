-- Select LONG_W corresponding to the smallest LAT_N greater than 38.7780
-- ROUND to 4 decimal places
-- ORDER BY LAT_N ASC ensures we get the smallest LAT_N first

SELECT ROUND(LONG_W,4) 
FROM STATION
WHERE LAT_N > 38.7780
ORDER BY LAT_N
LIMIT 1;
