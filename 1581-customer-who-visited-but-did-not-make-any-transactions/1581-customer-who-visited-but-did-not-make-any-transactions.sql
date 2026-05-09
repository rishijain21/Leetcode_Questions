# Write your MySQL query statement below
select v.customer_id , count(customer_id) as count_no_trans
from visits v 
left JOIN  Transactions t 
on v.visit_id = t.visit_id 
where t.transaction_id IS Null group by customer_id;