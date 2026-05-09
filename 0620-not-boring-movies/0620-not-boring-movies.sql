# Write your MySQL query statement below
select * from Cinema c1

where c1.id %2 !=0 and c1.description != 'boring' order by rating desc