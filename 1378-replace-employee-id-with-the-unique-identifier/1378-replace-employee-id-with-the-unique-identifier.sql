# Write your MySQL query statement below

select ue.unique_id,e.name from Employees e
left join EmployeeUNI ue
on e.id = ue.id;