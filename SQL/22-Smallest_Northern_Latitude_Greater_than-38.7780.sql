-- Select the smallest LAT_N greater than 38.7780
-- ROUND to 4 decimal places
-- ORDER BY LAT_N ASC ensures the smallest LAT_N comes first

SELECT ROUND(LAT_N,4) 
FROM STATION
WHERE LAT_N > 38.7780
ORDER BY LAT_N
LIMIT 1;
