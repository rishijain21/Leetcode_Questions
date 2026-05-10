# Write your MySQL query statement below
select class
from
courses

group by class

HAVING COUNT(class) >=5;