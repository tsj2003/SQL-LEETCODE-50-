select s.year, s.price, p.product_name
from  Sales as s 
left join Product as p
on s.product_id = p.product_id 