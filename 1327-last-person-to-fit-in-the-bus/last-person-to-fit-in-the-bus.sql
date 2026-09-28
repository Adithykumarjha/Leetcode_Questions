# Write your MySQL query statement below
SELECT q.person_name
FROM Queue q
JOIN Queue q2 ON q.turn >=q2.turn
GROUP BY q.turn
HAVING SUM(q2.weight)<=1000
ORDER BY SUM(q2.weight) DESC
LIMIT 1