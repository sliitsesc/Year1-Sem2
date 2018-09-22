CREATE TABLE student_IT18113228(
	StNo char(5) NOT NULL,
	StName varchar(50),
	Address varchar(50),
	Phone int,
	Course char(50),
	Constraint student_pk Primary Key(StNo) 
)

SELECT * 
FROM student_IT18113228;

INSERT INTO student_IT18113228
VALUES ('ST001','Nilusha','Galle',0992333333,'IT'),
('ST002','Sahan','Colombo',0112345345,'IT'),
('ST003','Janani','Kandy',0812222222,'IS');

SELECT StNo Student_No,StName Student_Name,Phone Contact_Number 
FROM student_IT18113228;

ALTER TABLE student_IT18113228
ADD  Age int;

ALTER TABLE student_IT18113228
ADD  Last_Name varchar(50);

UPDATE student_IT18113228
SET Last_Name = 'Perera'
WHERE Stno = 'ST001';

UPDATE student_IT18113228
SET Last_Name = 'Fernando'
WHERE Stno = 'ST002';

UPDATE  student_IT18113228
SET Last_Name = 'Alwita'
WHERE Stno = 'ST003';

ALTER TABLE student_IT18113228
ADD CONSTRAINT course_constraint CHECK(Course ='IT' OR Course ='IS' OR Course ='CSN');

INSERT INTO student_IT18113228(StNo,StName,Last_Name,Address,Phone,Course,Age)
VALUES ('ST004','Heshan','De Silva','Colombo-03',0112789658,'BM',24);

ALTER TABLE student_IT18113228
DROP COLUMN Age;

UPDATE student_IT18113228
SET Phone = 0112456789
WHERE StNo='ST002';

UPDATE student_IT18113228
SET Address = 'Karapitiya'
WHERE StNo='ST001';

DELETE FROM student_IT18113228
WHERE StNo = 'ST003';


DELETE FROM student_IT18113228
WHERE StNo = 'ST004';

