SELECT *
FROM customer;

SELECT *
FROM stock;

SELECT *
FROM items;

SELECT *
FROM orders;

SELECT *
FROM customer
ORDER BY customer_num DESC;

SELECT lname,state,city
FROM customer
WHERE lname LIKE '[A-G]%'
ORDER BY state,city;

SELECT stock_num 'stock number',manu_code 'item code',unit_price 'old price',(unit_price * 115 /100) 'new price'
FROM stock 
WHERE manu_code = 'ANZ';

SELECT COUNT(*) AS 'Number Of Items'
FROM items;

SELECT COUNT(*) AS 'Number Of Customers'
FROM customer;

SELECT SUM(ship_charge) / COUNT(*) AS 'Average Shipping Charge'
FROM orders;

SELECT stock_num 'stock number',manu_code 'item code',unit_price 'old price',ROUND(unit_price * 115/100,0) 'new price'
FROM stock 
WHERE manu_code = 'ANZ';
