/*
	�����: ��� ������, �������� ������, ���������� �� ������,
	��������� ������� ������, �������� ������,
	����� � ��� ���������� ������, ���� ��������,
	���������� ������� � ��������
*/

CREATE DATABASE �����
USE �����


CREATE TABLE ����� (
	���_������		int IDENTITY(1,1) NOT NULL PRIMARY KEY,
	��������_������ nvarchar(50) NOT NULL,
	����������		int NOT NULL,
)


CREATE TABLE ��������� (
	���_������ int NOT NULL FOREIGN KEY REFERENCES �����(���_������),
	���������  float NOT NULL,
	��������   nvarchar(50) NULL,
)


CREATE TABLE ���������� (
	���_������				int NOT NULL FOREIGN KEY REFERENCES �����(���_������),
	�����_����������		int IDENTITY (1,1) NOT NULL,
	���_����������			nvarchar(50) NOT NULL,
	����_��������			date NOT NULL,
	����������_�_��������	int NOT NULL,
)


INSERT INTO �����(��������_������, ����������) VALUES
	('���������', 3),
	('����', 5),
	('����', 5),
	('����', 18),
	('����', 15),
	('����������', 10),
	('�������������', 13),
	('�����������', 15),
	('������', 3),
	('�������', 25);


INSERT INTO ��������� VALUES
	(1, 25.5, NULL),
	(2, 12, NULL),
	(3, 12, NULL),
	(4, 3.5, NULL),
	(5, 5.2, NULL),
	(6, 10, NULL),
	(7, 13.5, NULL),
	(8, 16.99, NULL),
	(9, 43.99, NULL),
	(10, 12.7, NULL);


INSERT INTO ����������(���_������, ���_����������, ����_��������, ����������_�_��������) VALUES
	(1, '�������', '2015-05-15', 5),
	(2, '������', '2020-08-20', 10),
	(3, '�������', '2020-08-20', 2),
	(4, '�������', '2021-01-5', 3),
	(5, '�����', '2018-12-29', 15),
	(6, '�������', '2018-12-28', 4),
	(7, '��������', '2016-10-01', 100),
	(8, '��������', '2017-10-09', 8),
	(9, '��������', '2020-08-20', 2),
	(10, '������', '2017-10-09', 15);