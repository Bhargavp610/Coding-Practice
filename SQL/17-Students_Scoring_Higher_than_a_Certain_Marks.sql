-- Select student names with Marks > 75
-- Order by last three characters of NAME, then by ID to break ties

SELECT NAME
FROM STUDENTS
WHERE Marks > 75
ORDER BY RIGHT(NAME,3), ID;
