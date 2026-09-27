# Write your MySQL query statement below
SELECT c.class FROM Courses c
GROUP BY class
HAVING COUNT(student) >= 5