CREATE TABLE student_IT18004182(
	StdNo char(5) NOT NULL,
	StName varchar(50),
	Address varchar(50),
	Phone int,
	Course char(50),
	Constraint student_pk Primary Key(StdNo)
)

SELECT * FROM student_IT18004182;

INSERT INTO student_IT18004182 
VALUES ('ST001','Nilusha','Galle',0771234567,'IT'),
('ST002',	'Sahan',	'Colombo',	0112345345,	'IT'),
('ST003',	'Janani',	'Kandy',	0812222222,	'IS');
