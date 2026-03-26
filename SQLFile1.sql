
--Topic: University Course Registration System



CREATE TABLE Departments (
DepartmentID INT IDENTITY(1,1) PRIMARY KEY,
DeptName VARCHAR(100) NOT NULL UNIQUE,
Location VARCHAR(100) NULL
);
CREATE TABLE Instructors (
InstructorID INT IDENTITY(1,1) PRIMARY KEY,
FirstName NVARCHAR(50) NOT NULL,
LastName NVARCHAR(50) NOT NULL,
Email VARCHAR(100) NOT NULL UNIQUE,
HireDate DATE NOT NULL,
DepartmentID INT NOT NULL,
CONSTRAINT FK_Instructors_Departments
FOREIGN KEY (DepartmentID) REFERENCES Departments(DepartmentID)
);

CREATE TABLE Students (
StudentID INT IDENTITY(1,1) PRIMARY KEY,
FirstName NVARCHAR(50) NOT NULL,
LastName NVARCHAR(50) NOT NULL,
Email VARCHAR(100) NOT NULL UNIQUE,
Phone VARCHAR(15) NULL, -- will keep some NULL values
DateOfBirth DATE NOT NULL,
Gender CHAR(1) NOT NULL
CHECK (Gender IN ('M','F','O')),
DepartmentID INT NOT NULL,
AdmissionYear INT NOT NULL,
CONSTRAINT FK_Students_Departments
FOREIGN KEY (DepartmentID) REFERENCES Departments(DepartmentID)
);

CREATE TABLE Courses (
CourseID INT IDENTITY(1,1) PRIMARY KEY,
CourseCode VARCHAR(10) NOT NULL UNIQUE,
CourseName NVARCHAR(100) NOT NULL,
Credits TINYINT NOT NULL CHECK (Credits BETWEEN 1 AND 6),
DepartmentID INT NOT NULL,
InstructorID INT NOT NULL,
Description NVARCHAR(255) NULL,
CONSTRAINT FK_Courses_Departments
FOREIGN KEY (DepartmentID) REFERENCES Departments(DepartmentID),
CONSTRAINT FK_Courses_Instructors
FOREIGN KEY (InstructorID) REFERENCES Instructors(InstructorID)
);

CREATE TABLE Enrollments (
EnrollmentID INT IDENTITY(1,1) PRIMARY KEY,
StudentID INT NOT NULL,
CourseID INT NOT NULL,
EnrollmentDate DATE NOT NULL DEFAULT (GETDATE()),
Grade CHAR(2) NULL
CHECK (Grade IN ('A+','A','B+','B','C','D','F')),
Status VARCHAR(20) NOT NULL
CHECK (Status IN ('Enrolled','Completed','Dropped')),
CONSTRAINT FK_Enrollments_Students
FOREIGN KEY (StudentID) REFERENCES Students(StudentID),
CONSTRAINT FK_Enrollments_Courses
FOREIGN KEY (CourseID) REFERENCES Courses(CourseID)
);
INSERT INTO Departments (DeptName, Location) VALUES
('Computer Science', 'Block A'),
('Information Technology', 'Block A'),
('Electronics', 'Block B'),
('Mechanical', 'Block C'),
('Civil', 'Block D'),
('Mathematics', 'Block E'),
('Physics', 'Block F'),
('Chemistry', 'Block F'),
('Management', 'Block G'),
('Humanities', NULL);

select *from Departments

INSERT INTO Instructors (FirstName, LastName, Email, HireDate, DepartmentID) VALUES
('Raj', 'Sharma', 'raj.sharma@uni.edu', '2015-07-01', 1),
('Anita', 'Verma', 'anita.verma@uni.edu', '2016-01-15', 2),
('Rohit', 'Mehta', 'rohit.mehta@uni.edu', '2017-03-10', 1),
('Priya', 'Singh', 'priya.singh@uni.edu', '2014-08-20', 3),
('Karan', 'Patel', 'karan.patel@uni.edu', '2018-11-05', 4),
('Neha', 'Gupta', 'neha.gupta@uni.edu', '2019-06-12', 5),
('Amit', 'Joshi', 'amit.joshi@uni.edu', '2020-02-01', 6),
('Sneha', 'Kulkarni', 'sneha.kulkarni@uni.edu','2013-09-18', 7),
('Vikas', 'Rao', 'vikas.rao@uni.edu', '2012-05-25', 8),
('Meera', 'Nair', 'meera.nair@uni.edu', '2021-01-10', 9);


INSERT INTO Students (FirstName, LastName, Email, Phone, DateOfBirth, Gender, DepartmentID, AdmissionYear) VALUES
('Aryan', 'Prasher', 'aryan.prasher@uni.edu', '9876543210', '2003-05-12', 'M', 1, 2021),
('Simran', 'Kaur', 'simran.kaur@uni.edu', NULL, '2002-11-23', 'F', 2, 2020),
('Rahul', 'Yadav', 'rahul.yadav@uni.edu', '9876500001', '2001-02-14', 'M', 1, 2019),
('Pooja', 'Rani', 'pooja.rani@uni.edu', '9876500002', '2002-07-07', 'F', 3, 2020),
('Mohit', 'Singh', 'mohit.singh@uni.edu', NULL, '2000-09-30', 'M', 4, 2018),
('Kriti', 'Jain', 'kriti.jain@uni.edu', '9876500003', '2001-12-01', 'F', 1, 2019),
('Ansh', 'Gupta', 'ansh.gupta@uni.edu', '9876500004', '2003-03-19', 'M', 5, 2021),
('Ruhi', 'Arora', 'ruhi.arora@uni.edu', NULL, '2002-08-11', 'F', 6, 2020),
('Deepak', 'Kumar', 'deepak.kumar@uni.edu', '9876500005', '1999-10-04', 'M', 7, 2017),
('Shivani', 'Mishra', 'shivani.mishra@uni.edu', '9876500006', '2000-01-27', 'F', 9, 2018);
INSERT INTO Courses (CourseCode, CourseName, Credits, DepartmentID, InstructorID, Description) VALUES
('CS101', 'Introduction to Programming', 4, 1, 1, 'Basics of C and problem solving'),
('CS201', 'Data Structures', 4, 1, 3, 'Stacks, queues, trees, graphs'),
('CS301', 'Database Systems', 4, 1, 3, NULL), -- NULL description
('IT101','Fundamentals of IT', 3, 2, 2, 'Basics of IT infrastructure'),
('EC101','Basic Electronics', 3, 3, 4, 'Circuit theory'),
('ME101','Engineering Mechanics', 3, 4, 5, NULL),
('CV101','Structural Analysis', 4, 5, 6, 'Structures and design'),
('MA101','Calculus I', 4, 6, 7, 'Limits, derivatives, integrals'),
('PH101','Engineering Physics', 3, 7, 8, 'Optics and waves'),
('MG101','Principles of Management', 3, 9,10, 'Basics of management');
INSERT INTO Enrollments (StudentID, CourseID, EnrollmentDate, Grade, Status) VALUES
(1, 1, '2022-01-10', 'A', 'Completed'),
(1, 2, '2022-07-15', 'B+', 'Completed'),
(2, 4, '2022-01-10', 'A+', 'Completed'),
(3, 1, '2021-01-05', 'B', 'Completed'),
(3, 3, '2021-07-20', NULL, 'Enrolled'),
(4, 5, '2022-01-12', 'C', 'Completed'),
(5, 6, '2019-08-01', 'D', 'Completed'),
(6, 2, '2020-01-10', 'A', 'Completed'),
(7, 7, '2022-01-11', NULL, 'Enrolled'),
(8, 8, '2021-01-15', 'B+', 'Completed');
--Extra INSERT
INSERT INTO Departments (DeptName, Location)
VALUES ('Design', 'Block H');
--UPDATE
UPDATE Students
SET Phone = '9999999999'
WHERE StudentID = 2;
--DELETE
DELETE FROM Enrollments
WHERE EnrollmentID = 10;
--ALTER TABLE – ADD COLUMN
ALTER TABLE Students
ADD BloodGroup VARCHAR(5) NULL;
--ALTER TABLE – DROP COLUMN
ALTER TABLE Students
DROP COLUMN BloodGroup;

-- Rename table Students to StudentsMaster
--EXEC sp_rename 'Students', 'StudentsMaster';
-- Rename column Phone to MobileNo in StudentsMaster
--EXEC sp_rename 'StudentsMaster.Phone', 'MobileNo', 'COLUMN';

--------------------------------JOINS---------------------------------
--INNER JOIN (Students with Departments)
SELECT s.StudentID, s.FirstName, s.LastName, d.DeptName
FROM Students s
INNER JOIN Departments d
ON s.DepartmentID = d.DepartmentID;
--LEFT JOIN (all Students, even if no Department)
SELECT s.StudentID, s.FirstName, d.DeptName
FROM Students s
LEFT JOIN Departments d
ON s.DepartmentID = d.DepartmentID;
--RIGHT JOIN (all Departments, even if no Students)
SELECT s.StudentID, s.FirstName, d.DeptName
FROM Students s
RIGHT JOIN Departments d
ON s.DepartmentID = d.DepartmentID;
--FULL OUTER JOIN (all Students & Departments)
SELECT s.StudentID, s.FirstName, d.DeptName
FROM Students s
FULL OUTER JOIN Departments d
ON s.DepartmentID = d.DepartmentID;
--JOIN between Courses and Instructors
SELECT c.CourseCode, c.CourseName, i.FirstName, i.LastName
FROM Courses c
INNER JOIN Instructors i
ON c.InstructorID = i.InstructorID;

luci, [25-11-2025 13:10]
-------------------Pattern Matching (LIKE)-----------------------
--Students whose first name starts with 'A'
SELECT * FROM Students
WHERE FirstName LIKE 'A%';
--Students whose last name ends with 'a'
SELECT * FROM Students
WHERE LastName LIKE '%a';
--Email domain is 'uni.edu'
SELECT * FROM Students
WHERE Email LIKE '%@uni.edu';
--First name of length 5 (simple example)
SELECT * FROM Students
WHERE FirstName LIKE '_____';
--Students whose name contains 'an'
SELECT * FROM Students
WHERE FirstName LIKE '%an%' OR LastName LIKE '%an%';
--Phone numbers starting with '98765'
SELECT * FROM Students
WHERE Phone LIKE '98765%';

-------------------------Character Functions----------------------------
--Uppercase full name
SELECT StudentID,
UPPER(FirstName + ' ' + LastName) AS FullNameUpper
FROM Students;
--Lowercase emails
SELECT Email,
LOWER(Email) AS EmailLower
FROM Students;
--Extract domain from email
SELECT Email,
SUBSTRING(Email, CHARINDEX('@', Email) + 1, LEN(Email)) AS Domain
FROM Students;
--Reverse last name
SELECT LastName,
REVERSE(LastName) AS ReversedLastName
FROM Students;
--Replace 'uni.edu' with 'university.edu'
SELECT Email,
REPLACE(Email, 'uni.edu', 'university.edu') AS NewEmail
FROM Students;

----------------Aggregate Functions with GROUP BY, HAVING, ORDER BY--------------------------
--Total students in each admission year
SELECT AdmissionYear,
COUNT(*) AS TotalStudents
FROM Students
GROUP BY AdmissionYear
ORDER BY AdmissionYear;
--Count of students by gender (M/F/O)
SELECT Gender,
COUNT(*) AS TotalStudents
FROM Students
GROUP BY Gender;
SELECT AVG(CAST(Credits AS DECIMAL(5,2))) AS AvgCredits,
MIN(Credits) AS MinCredits,
MAX(Credits) AS MaxCredits
FROM Courses;
--Years that have more than 2 admitted students (GROUP BY + HAVING)
SELECT AdmissionYear,
COUNT(*) AS TotalStudents
FROM Students
GROUP BY AdmissionYear
HAVING COUNT(*) > 2
ORDER BY TotalStudents DESC;
--Minimum credits per department
SELECT DepartmentID,
MIN(Credits) AS MinCredits
FROM Courses
GROUP BY DepartmentID;
---------------------------Nested Queries / Subqueries---------------
-- Find students whose DepartmentID equals the department
-- having the highest student count
SELECT *
FROM Students
WHERE DepartmentID = (
SELECT TOP 1 DepartmentID
FROM Students
GROUP BY DepartmentID
ORDER BY COUNT(*) DESC
);
--Courses having credits greater than the average credits
SELECT *
FROM Courses
WHERE Credits > (
SELECT AVG(CAST(Credits AS DECIMAL(5,2)))
FROM Courses
);
--Students older than the average age of all students
SELECT StudentID,FirstName,LastName,DateOfBirth
FROM Students
WHERE DateOfBirth < (
SELECT AVG(CAST(DateOfBirth AS FLOAT))
FROM Students
);
--Students who have at least one enrollment (using EXISTS)
SELECT *
FROM Students s
WHERE EXISTS (
SELECT 1
FROM Enrollments e
WHERE e.StudentID = s.StudentID
);

--------------------TRANSACTION------------------------
-- 1. Simple UPDATE with ROLLBACK
BEGIN TRAN;
UPDATE Enrollments
SET Grade = 'A+'
WHERE EnrollmentID = 3;
ROLLBACK TRAN; -- Grade will return to original
-- 2. Simple UPDATE with COMMIT
BEGIN TRAN;
UPDATE Enrollments
SET Grade = 'B+'
WHERE EnrollmentID = 4;
COMMIT TRAN;
-- 3. DELETE with ROLLBACK
BEGIN TRAN;
DELETE FROM Enrollments
WHERE Status = 'Dropped';
ROLLBACK TRAN;

-- 4. Transaction with error -> ROLLBACK
BEGIN TRAN;
UPDATE Enrollments
SET Grade = 'Z' -- invalid, due to CHECK constraint
WHERE EnrollmentID = 1;
ROLLBACK TRAN;
select count(*) from students
LEFT()

👉 Takes characters from the left side.

SELECT LEFT('Kumail', 3);
CHARINDEX()

👉 Finds the position of a character or word.
(Returns 0 if not found)

SELECT CHARINDEX('m', 'Kumail');