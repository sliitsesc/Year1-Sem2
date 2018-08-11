SELECT *
FROM customer;

SELECT *
FROM state;

SELECT *
FROM stock;

SELECT *
FROM manufact;

SELECT *
FROM items;

SELECT *
FROM customer;

SELECT *
FROM orders;

SELECT *
FROM stock;




SELECT c.fname+c.lname Name,s.sname
FROM customer c, state s
WHERE c.state = s.code;

SELECT s.*,m.manu_name
FROM stock s,manufact m
WHERE s.manu_code = m.manu_code;

SELECT s.description,m.manu_name
FROM stock s,manufact m
WHERE s.manu_code = m.manu_code AND s.description = 'kick board';

SELECT c.fname+c.lname Name,o.ship_weight
FROM customer c,orders o
WHERE c.customer_num = o.customer_num AND o.ship_weight > 180.00;

SELECT c.fname,s.description
FROM customer c,orders o,items i,stock s
WHERE i.order_num = o.order_num AND i.stock_num = s.stock_num AND c.customer_num = o.customer_num AND  s.description = 'swimcap';