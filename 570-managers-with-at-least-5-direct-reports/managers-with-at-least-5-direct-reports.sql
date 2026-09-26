# Write your MySQL query statement below
SELECT e.name
FROM Employee e
JOIN Employee em ON e.id = em.managerId
GROUP BY em.managerId
HAVING COUNT(*)>=5