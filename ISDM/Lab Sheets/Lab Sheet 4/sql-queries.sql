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

