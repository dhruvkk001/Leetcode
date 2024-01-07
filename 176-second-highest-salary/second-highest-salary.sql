# Write your MySQL query statement below
#SELECT MAX(salary) AS SecondHighestSalary
#FROM employee
#WHERE salary < (SELECT MAX(salary) FROM employee);
# Write your MySQL query statement below

SELECT  MAX(SALARY) AS SecondHighestSalary 
FROM EMPLOYEE
WHERE SALARY <> (SELECT MAX(SALARY) FROM EMPLOYEE);