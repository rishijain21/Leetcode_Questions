# Write your MySQL query statement below
select max(num) as num
from (select num from mynumbers 



group by num 
HAVING COUNT(*) = 1) as num