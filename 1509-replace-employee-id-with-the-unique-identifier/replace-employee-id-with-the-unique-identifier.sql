# Write your MySQL query statement below
SELECT 
uni.unique_id as unique_id, e.name as name
FROM Employees e left join EmployeeUNI uni on e.id=uni.id