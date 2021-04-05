// ItemFactory.h: interface for the ItemFactory class.
//
//////////////////////////////////////////////////////////////////////

#if !defined(AFX_ITEMFACTORY_H__E790A7FC_2B98_4187_972E_E33B95B5C143__INCLUDED_)
#define AFX_ITEMFACTORY_H__E790A7FC_2B98_4187_972E_E33B95B5C143__INCLUDED_

#if _MSC_VER > 1000
#pragma once
#endif // _MSC_VER > 1000

#include "Book.h"
#include "Journal.h"
//
// ������� �������� �������
//
class ItemFactory
{
public:
	// ��������� ����� ��� �������� ���������� �����.
	// �� ����������� ������� �������� ������.
	Journal* CreateJournal();

	// ��������� ����� ��� �������� ���������� �������.
	// �� ����������� ������� �������� ������.
	Book* CreateBook();

	// ������� ������ �� ��������� "��������", ������� � ���� ��������� �������.
	static ItemFactory& Instance();

	virtual ~ItemFactory();

private:

	// ������������ ��������� "��������" - ����������� ����
	static ItemFactory s_instance;

	// ������� ��������� "���������" - �������� �������.
	// ��� ���� ������� (�� ����������� ����). ��� ������������� ��� ���������
	// ������������� ����������� �������� �������.
	int _counter;

	// �������� ����������� ��� ����, ����� ������� ������ �� ����� ���������
	// ��������� �������. ��� ����������� ������ �������������� "��������".
	ItemFactory();

};





// ������������� ������������ ���� ������,
// ��� ���� ����� ������� ����������� ��� ����������
ItemFactory ItemFactory::s_instance;

ItemFactory::ItemFactory() : _counter(0)
{
}

ItemFactory::~ItemFactory()
{

}

ItemFactory& ItemFactory::Instance()
{
	return s_instance;
}

Book* ItemFactory::CreateBook()
{
	_counter++;

	// �������������� ����� � ������
	char buffer[10];
	_itoa_s(_counter, buffer, 10);

	const string title = string("������� ����������� �� �++. ��� ") + string(buffer);
	const double price = _counter;
	string author = string("���������� �.");

	return new Book(title, price, author);
}

Journal* ItemFactory::CreateJournal()
{
	_counter++;

	// �������������� ����� � ������
	char buffer[5];
	_itoa_s(_counter, buffer, 5);

	string title = string("��������");
	double price = _counter;
	string volume = string(buffer);

	return new Journal(title, price, volume);

}

#endif // !defined(AFX_ITEMFACTORY_H__E790A7FC_2B98_4187_972E_E33B95B5C143__INCLUDED_)
