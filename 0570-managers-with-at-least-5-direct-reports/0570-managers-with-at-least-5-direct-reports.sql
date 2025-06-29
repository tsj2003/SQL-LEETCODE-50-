select e1.name
from Employee e1
JOIN Employee e2
on e1.id = e2. managerId
group by e2. managerId
having 
count(e2. managerId) >=5