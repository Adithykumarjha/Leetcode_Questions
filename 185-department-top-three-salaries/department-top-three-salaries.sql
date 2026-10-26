# Write your MySQL query statement below
select d.name as department, e1.name as employee, e1.salary as Salary
from Employee e1 join Department d on e1.DepartmentId = d.id
where 3> (select count(distinct(e2.salary))
from Employee e2
where e2.salary > e1.salary
and e1.DepartmentId = e2.departmentId
)