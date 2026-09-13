# Write your MySQL query statement below
select e.firstname,e.lastname,a.city,a.state
from Person as e
left join Address as a
on e.personId=a.personId
