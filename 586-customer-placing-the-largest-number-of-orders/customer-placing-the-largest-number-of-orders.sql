# Write your MySQL query statement below
SELECT o.customer_number FROM Orders o 
GROUP BY customer_number
ORDER BY COUNT(customer_number) DESC
LIMIT 1;