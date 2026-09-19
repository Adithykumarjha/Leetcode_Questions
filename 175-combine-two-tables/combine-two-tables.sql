# Write your MySQL query statement below
select Person.firstName, Person.lastName, Address.City, Address.State FROM Person LEFT JOIN Address ON Person.personId=Address.personId;