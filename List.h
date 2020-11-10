#pragma once
#ifndef LIST
#define LIST

/// @todo поля в структуре данных с большой буквы начинаются

/// @brief узел
struct Node
{
	int Data = 0;
	Node* Next = nullptr;
	Node* Prev = nullptr;
};

/// @brief список
struct List
{
	Node* Head = nullptr;
	Node* Tail = nullptr;
};

/// @brief функция удаления
/// @param list структура
/// @param index индекс
/// @param size размер списка
void Remove(List *list, int index, int size);

/// @brief  функция для вставки в начало
/// @param list		структура
/// @param Data		данные рользователя
void PushBack(List *list, int Data);

/// @brief вставка в начало
/// @param list структура 
/// @param Data данные рользователя
void PushFront(List* list,int Data);

/// @brief вставка после элемента
/// @param list		структура
/// @param Data		данные рользователя
/// @param index	индекс
/// @param size		размер списка
void InsertAfterIndex(List* list, int Data, int index,int size);

/// @brief вставка после элемента
/// @param list структура
/// @param Data данные рользователя
/// @param index  индекс
/// @param size размер списка
void InsertBeforeIndex(List* list, int Data, int index, int size);

/// @brief  сортировка
/// @param list структура
void Sort(List* list);

/// @brief поиск элемента
/// @param list структура
/// @param dataItem искомый элемент 
/// @return указатель
bool LinearSearch(List* list, int data, int size);

/// @brief вставка в конец
/// @param list структура
/// @param Data  данные рользователя

#endif	// ifndef LIST