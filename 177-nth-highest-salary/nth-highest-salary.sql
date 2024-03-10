CREATE FUNCTION getNthHighestSalary(N INT) RETURNS INT
BEGIN
  DECLARE result INT;
  SET result = (
    SELECT DISTINCT salary
    FROM Employee e1
    WHERE (N-1) = (
      SELECT COUNT(DISTINCT salary)
      FROM Employee e2
      WHERE e2.salary > e1.salary
    )
  );
  RETURN result;
END
