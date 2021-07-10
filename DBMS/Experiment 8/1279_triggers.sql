use trigger1;
drop table if exists ticket1;
CREATE TABLE ticket1(ticket_num int NOT NULL, from_place VARCHAR(20), destiny VARCHAR(20),cost int, seat_no INT, bid int,pid int);
delimiter $$
CREATE TRIGGER set_cost1
before INSERT 
ON ticket1
FOR EACH ROW 
begin
IF new.bid = 1 then
SET new.cost = new.cost+1000 ;
end if;
end; $$
delimiter ;


INSERT INTO ticket1 VALUES(1,'hyd','tirupathi',1000,5,1,1);
INSERT INTO ticket1 VALUES(2,'tirupati','karimnagar',2000,2,3,2);
INSERT INTO ticket1 VALUES(3,'hyderabad','vizag',2500,4,2,3),(4,'Nirmal','Siddipet',3000,1,4,7);
INSERT INTO ticket1 VALUES(1,'hyd','tirupathi',1000,3,1,1);
INSERT INTO ticket1 VALUES(2,'tirupati','karimnagar',2000,6,3,2);
INSERT INTO ticket1 VALUES(1,'hyd','tirupathi',1000,7,1,1);
INSERT INTO ticket1 VALUES(2,'tirupati','karimnagar',2000,8,3,2);
SELECT * FROM ticket1;