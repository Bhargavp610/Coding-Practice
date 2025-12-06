-- Classify each record as Equilateral, Isosceles, Scalene, or Not A Triangle
-- Triangle inequality check comes first to filter invalid triangles

SELECT
    CASE
        WHEN (A + B <= C) OR (B + C <= A) OR (A + C <= B) THEN 'Not A Triangle'
        WHEN A = B AND B = C THEN 'Equilateral'
        WHEN A = B OR B = C OR A = C THEN 'Isosceles'
        ELSE 'Scalene'
    END AS TriangleType
FROM TRIANGLES;
