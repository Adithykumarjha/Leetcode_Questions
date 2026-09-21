# Write your MySQL query statement below
SELECT Employee.name, Bonus.bonus From Employee
LEFT JOIN Bonus ON Employee.empId=Bonus.empId
WHERE bonus<1000 OR Bonus IS NULL;