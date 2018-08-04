SELECT *
FROM customer;

SELECT *
FROM stock;

--1
SELECT stock_num AS 'Stock Number',manu_code AS 'Manu Code',description AS 'Description'
FROM stock
WHERE unit = 'box';

--2
SELECT *
FROM customer
WHERE state = 'FL';

--3
SELECT address1
FROM customer
WHERE customer_num=16;

--4
SELECT fname AS 'Customer Name'
FROM customer
WHERE state='CA' AND city ='Redwood city';

--5
SELECT description AS 'Description', unit_price AS 'Unit Price'
FROM stock
WHERE manu_code='NRG';

--6
SELECT unit_price AS 'Unit Price', description AS 'Description'
FROM stock
WHERE manu_code = 'HRO' OR manu_code = 'HSK';

--7
SELECT order_num AS 'Order No'
FROM orders
WHERE order_date > '2011/04/07';

--8
SELECT description AS 'Description'
FROM stock
WHERE unit_price BETWEEN 100 AND 250;

--9
SELECT customer_num AS 'Customer No',fname AS 'First Name',lname AS 'Last Name'
FROM customer
WHERE city IS NULL;

--10
SELECT *
FROM orders
WHERE backlog IS NOT NULL;

--11
SELECT *
FROM orders
WHERE order_num IN (5,8,10);

--12
SELECT fname + lname name, address1,phone
FROM customer
WHERE city IN ('Blue island','Lake island', 'Redwood city');

--13
SELECT *
FROM manufact
WHERE manu_code LIKE 'H%';

--14
SELECT *
FROM manufact
WHERE manu_name LIKE '[A-N]%';
