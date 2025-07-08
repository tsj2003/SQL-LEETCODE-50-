# Write your MySQL query statement below 
SELECT 
    ROUND(
        SUM(IF(order_date = customer_pref_delivery_date, 1, 0)) * 100.0 
        / COUNT(DISTINCT customer_id), 
    2) AS immediate_percentage
FROM Delivery



where (customer_id, order_date)in (
SELECT customer_id,   MIN(order_date)
from  Delivery
group by customer_id
);