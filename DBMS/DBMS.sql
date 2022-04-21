CREATE TABLE EMPLOYEE
(FNAME  VARCHAR(15) NOT NULL,
MINIT   CHAR,
LNAME VARCHAR(15) NOT NULL,
SSN CHAR(9) NOT NULL,
BDATE DATE,
ADDRESS VARCHAR(30),
SEX CHAR,
SALARY DECIMAL(10,2),
SUPERSSN CHAR(9),
DNO INT NOT NULL,
PRIMARY KEY (SSN),
FOREIGN KEY (SUPERSSN) REFERENCES EMPLOYEE(SSN),
FOREIGN KEY (DNO) REFERENCES DEPARTMENT(DNUMBER)
);

CREATE TABLE DEPARTMENT
( DNAME VARCHAR(15) NOT NULL,
DNUMBER INT NOT NULL,
MGRSSN CHAR(9) NOT NULL,
MGRSTARTDATE DATE,
PRIMARY KEY (DNUMBER),
UNIQUE (DNAME),
FOREIGN KEY (DNUMBER) REFERENCES DEPARTMENT(DNUMBER)
);

CREATE TABLE PROJECT
(PNAME VARCHAR(15) NOT NULL,
PNUMBER INT NOT NULL,
PLOCATION VARCHAR(15),
DNUM INT NOT NULL,
PRIMARY KEY (PNUMBER),
UNIQUE (PNAME),
FOREIGN KEY (DNUM) REFERENCES DEPARTMENT(DNUMBER)
);

CREATE TABLE WORKS_ON
(ESSN CHAR(9) NOT NULL,
PNO INT NOT NULL,
HOURS DECIMAL(3,1) NOT NULL,
PRIMARY KEY (ESSN,PNO),
FOREIGN KEY (ESSN) REFERENCES EMPLOYEE(SSN),
FOREIGN KEY (PNO) REFERENCES PROJECT(PNUMBER)
);

CREATE TABLE DEPENDENT 
(ESSN CHAR(9) NOT NULL,
DEPENDENT_NAME VARCHAR(9) NOT NULL,
SEX CHAR,
BDATE DATE,
RELATIONSHIP VARCHAR(8),
PRIMARY KEY (ESSN,DEPENDENT_NAME),
FOREIGN KEY (ESSN) REFERENCES EMPLOYEE(SSN)
);

-- FOR CONSTRAINTS
CREATE TABLE EMPLOYEE
(DNO INT NOT NULL DEFAULT 1,
CONSTRAINT EMPPK
PRIMARY KEY (SSN),
CONSTRAINT EMPSUPERFK
FOREIGN KEY (SUPERSSN) REFERENCES EMPLOYEE(SSN) ON DELETE SET NULL ON UPDATE CASCADE,
CONSTRAINT EMPDEPTFK
FOREIGN KEY (DNO) REFERENCES DEPARTMENT(DNUMBER) ON DELETE SET DEFAULT ON UPDATE CASCADE
);

CREATE TABLE DEPARTMENT
(MGRSSN CHAR(9) NOT NULL DEFAULT '888665555',
CONSTRAINT DEPTPK
PRIMARY KEY (DNUMBER),
CONSTRAINT DEPTSK
UNIQUE (DNAME),
CONSTRAINT DEPTMGRFK
FOREIGN KEY (MGRSSN) REFERENCES EMPLOYEE(SSN) ON DELETE SET DEFAULT ON UPDATE CASCADE
);

CREATE TABLE DEPT_LOCATIONS
(PRIMARY KEY (DNUMBER,DLOCATION),
FOREIGN KEY (DNUMBER) REFERENCES DEPARTMENT(DNUMBER) ON DELETE CASCADE ON UPDATE CASCADE
);