create database assessment;	--database created

use assessment;

create table Customer (			--customer table created
	customer_id int primary key, 
	cust_name varchar(255), 
	city varchar(255), grade int, 
	salesman_id int
);

insert into Customer (customer_id, cust_name, city, grade, salesman_id) 	--inserting data into customer table
values 
	(3002, "Nick Rimando", "New York", 100, 5001),
	(3007, "Brad Davis", "New York", 200, 5001),
	(3005, "Graham Zusi", "California", 200, 5002),
	(3008, "Julian Green", "London", 300, 5002),
	(3004, "Fabian Johnson", "Paris", 300, 5006),
	(3009, "Geoff Cameron", "Berlin", 100, 5003),
	(3003, "Jozy Altidor", "Moscow", 200, 5007),
	(3001, "Brad Guzan", "London", NULL, 5005);

create table salesman (salesman_id int primary key, 	--salesman table created
	name varchar(255), 
	city varchar(255), 
	commission decimal(5, 2)
);

insert into salesman (salesman_id, name, city, commission) 	--inserting data into salesman table
values 
	(5001, "James Hoog", "New York", 0.15),
	(5002, "Nail Knite", "Paris", 0.13),
	(5005, "Pit Alex", "London", 0.11),
	(5006, "Mc Lyon", "Paris", 0.14),
	(5007, "Paul Adam", "Rome", 0.13),
	(5003, "Lausen Hen", "San Jose", 0.12);
    
select cust_name, Customer.city, name, commission	--showing customers with their respective salermen
from Customer
join salesman 
on Customer.salesman_id = salesman.salesman_id;
