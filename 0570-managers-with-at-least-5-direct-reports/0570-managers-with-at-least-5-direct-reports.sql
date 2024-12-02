# Write your MySQL query statement below


select name from Employee where id in (
select managerId from Employee GROUP BY managerId 
    HAVING COUNT(managerId) >=5
);
