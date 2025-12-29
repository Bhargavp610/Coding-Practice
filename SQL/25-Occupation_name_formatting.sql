-- Generate an alphabetically ordered list of names
-- Append the first letter of each person's occupation in parentheses

SELECT CONCAT(Name,'(', LEFT(Occupation, 1), ')')
FROM OCCUPATIONS
ORDER BY Name;

-- Count the total number of occurrences for each occupation
-- Convert occupation names to lowercase and append 's'
-- Sort results by count (ascending), then alphabetically by occupation

SELECT 'There are a total of ', COUNT(Occupation), CONCAT(LOWER(OCCUPATION), 's.')
FROM OCCUPATIONS
GROUP BY Occupation
ORDER BY COUNT(OCCUPATION), Occupation ASC;