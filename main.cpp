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
		cout << "количество узлов  " << size << endl;
		cout << "1 Добавить элемент" << endl;
		cout << "2 показать список" << endl;
		cout << "3 удалить эелемент" << endl;
		cout << "4 вставить в начало" << endl;
		cout << "5 вставка после определенного индекса" << endl;
		cout << "6 вставка до определенного индекса" << endl;
		cout << "7 сортировка" << endl;
		cout << "8 линейный поиск" << endl;
		cout << "0 Выход" << endl;
		cout << "=============================================================" << endl;
		result = Security(0, 9, "выберите номер меню ");

		switch (result)
		{
			case 1:
			{
				int element;
				cout << "Введите элемент, который хотите вставить ";
				cin >> element;
				PushBack(list,element);
				size++;
				cout << "элемент вставлен " << endl;
				isCreateList = false;
				system("pause");
				break;
			}
			case 2:
			{
				if (size == 0)
				{
					cout << "список пуст" << endl;
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
					cout << "ошибка!!! список пуст " << endl;
					system("pause");
					break;
				}
				cout << "Введите индекс удаляемого элемента (от 1 до " << size << ")";
				index = Security(0, size, " ");
				Remove(list, index,size);
				cout << "элемент удален" << endl;
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
				cout << "Введите элемент, который хотите вставить в начало ";
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
					cout << "ошибка!!! список пуст " << endl;
					system("pause");
					break;
				}
				
				cout << "введите индекс после которого надо вставить (от 1 до " << size << ")";
				index = Security(1, size, " ");
				cout << "введите значение которое надо вставить ";
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
					cout << "ошибка!!! список пуст " << endl;
					system("pause");
					break;
				}
				int index, value;
				cout << "введите индекс до которого надо вставить (от 1 до " << size << ")";
				index = Security(1, size, " ");
				cout << "введите значение которое надо вставить ";
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
					cout << "ошибка!!! список пуст " << endl;
					system("pause");
					break;
				}
				Sort( list);
				cout << "отсортированный массив" << endl;
				ListPtint(list);
				system("pause");
				break;
			}
			case 8:
			{
				if (isCreateList)
				{
					cout << "ошибка!!! список пуст " << endl;
					system("pause");
					break;
				}
				cout << "ваш список " << endl;
				ListPtint(list);
				cout << "введите элемент поиска ";
				int element;
				cin >> element;
				if (LinearSearch(list, element, size))
				{
					cout << "элемент найден"<<endl;
					system("pause");
					break;
				}
				cout << "элемент не найден"<<endl;
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