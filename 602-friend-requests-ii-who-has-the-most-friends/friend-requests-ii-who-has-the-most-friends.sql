# Write your MySQL query statement below
WITH cte AS(
    SELECT requester_id,accepter_id
    FROM RequestAccepted

    UNION ALL

    SELECT accepter_id, requester_id
    FROM RequestAccepted
)

SELECT requester_id as id, COUNT(requester_id) AS num
FROM cte
GROUP BY requester_id
ORDER BY num DESC
LIMIT 1