#include <iostream>

#include "common.h"
#include "List.h"


using namespace std;
int main()
{
	int size = 0;
	bool isCreateList = true;
	setlocale(LC_ALL, "Russian");
	int result = 0;
	List *list = new List;
	do
	{
		cout << "=============================================================" << endl;
		cout << "���������� �����  " << size << endl;
		cout << "1 �������� �������" << endl;
		cout << "2 �������� ������" << endl;
		cout << "3 ������� ��������" << endl;
		cout << "4 �������� � ������" << endl;
		cout << "5 ������� ����� ������������� �������" << endl;
		cout << "6 ������� �� ������������� �������" << endl;
		cout << "7 ����������" << endl;
		cout << "8 �������� �����" << endl;
		cout << "0 �����" << endl;
		cout << "=============================================================" << endl;
		result = Security(0, 9, "�������� ����� ���� ");

		switch (result)
		{
			case 1:
			{
				int element;
				cout << "������� �������, ������� ������ �������� ";
				cin >> element;
				PushBack(list,element);
				size++;
				cout << "������� �������� " << endl;
				isCreateList = false;
				system("pause");
				break;
			}
			case 2:
			{
				if (size == 0)
				{
					cout << "������ ����" << endl;
					system("pause");
					break;
				}
				ListPtint(list);
				system("pause");
				break;
			}
			case 3:
			{
				int index;
				if (isCreateList)
				{
					cout << "������!!! ������ ���� " << endl;
					system("pause");
					break;
				}
				cout << "������� ������ ���������� �������� (�� 1 �� " << size << ")";
				index = Security(0, size, " ");
				Remove(list, index,size);
				cout << "������� ������" << endl;
				size--;
				if (size == 0)
				{
					isCreateList = true;
				}
				system("pause");
				break;
			}
			case 4:
			{
				int element = -1;
				cout << "������� �������, ������� ������ �������� � ������ ";
				cin >> element;
				PushFront(list,element);
				size++;
				isCreateList = false;
				system("pause");
				break;
			}
			case 5:
			{
				int index, value;
				if (isCreateList)
				{
					cout << "������!!! ������ ���� " << endl;
					system("pause");
					break;
				}
				
				cout << "������� ������ ����� �������� ���� �������� (�� 1 �� " << size << ")";
				index = Security(1, size, " ");
				cout << "������� �������� ������� ���� �������� ";
				cin >> value;
				InsertAfterIndex(list,value, index, size);
				size++;
				system("pause");
				break;
			}
			case 6:
			{
				if (isCreateList)
				{
					cout << "������!!! ������ ���� " << endl;
					system("pause");
					break;
				}
				int index, value;
				cout << "������� ������ �� �������� ���� �������� (�� 1 �� " << size << ")";
				index = Security(1, size, " ");
				cout << "������� �������� ������� ���� �������� ";
				cin >> value;
				InsertBeforeIndex(list, value, index, size);
				size++;
				system("pause");
				break;
			}
			case 7:
			{
				if (isCreateList)
				{
					cout << "������!!! ������ ���� " << endl;
					system("pause");
					break;
				}
				Sort( list);
				cout << "��������������� ������" << endl;
				ListPtint(list);
				system("pause");
				break;
			}
			case 8:
			{
				if (isCreateList)
				{
					cout << "������!!! ������ ���� " << endl;
					system("pause");
					break;
				}
				cout << "��� ������ " << endl;
				ListPtint(list);
				cout << "������� ������� ������ ";
				int element;
				cin >> element;
				if (LinearSearch(list, element, size))
				{
					cout << "������� ������"<<endl;
					system("pause");
					break;
				}
				cout << "������� �� ������"<<endl;
				system("pause");
				break;
			}
		}
		if (result > 0)
		{
			system("cls");
		}
	} while (result != 0);
	
	delete list->Head;
	
	return 0;
}