-- Approach: Selected specific columns CITY and STATE from the STATION table
SELECT CITY, STATE FROM STATION;

-- Approach: Used DISTINCT to remove duplicates and modulo filter to get even IDs
SELECT DISTINCT CITY FROM STATION
WHERE ID % 2 = 0;