# 1.	Make a list of customer names and the respective states they live in.

SELECT (fname + lname) AS 'Name', s.sname AS 'State'
FROM customer c, state s
WHERE s.code = c.state;

# 2.	Display the stock details with the corresponding manufacture’s name.

SELECT s.description,m.manu_name AS 'Manufacture Name'
FROM manufact m, stock s
WHERE s.manu_code = m.manu_code;

# 3.	Prepare a list of manufacturers that supply kickboards. 
# 4.	Find the number of customers live in each state. Display the name of the state and the number of customers.
# 5.	Make a list of customers who have placed orders that weigh greater than 180. Display the customer’s First name along with the shipping weight.
# 6.	Who are the customers that have ordered more than 100 items?
# 7.	Find the orders which are having a total price greater than $20,000. Prepare a list containing order number, the first name of the customer who has placed the order and the total price.
# 8.	Display the First name of the customers who have ordered swimcaps.
