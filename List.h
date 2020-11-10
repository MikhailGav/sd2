#pragma once
#ifndef LIST
#define LIST

/// @todo ���� � ��������� ������ � ������� ����� ����������

/// @brief ����
struct Node
{
	int Data = 0;
	Node* Next = nullptr;
	Node* Prev = nullptr;
};

/// @brief ������
struct List
{
	Node* Head = nullptr;
	Node* Tail = nullptr;
};

/// @brief ������� ��������
/// @param list ���������
/// @param index ������
/// @param size ������ ������
void Remove(List *list, int index, int size);

/// @brief  ������� ��� ������� � ������
/// @param list		���������
/// @param Data		������ ������������
void PushBack(List *list, int Data);

/// @brief ������� � ������
/// @param list ��������� 
/// @param Data ������ ������������
void PushFront(List* list,int Data);

/// @brief ������� ����� ��������
/// @param list		���������
/// @param Data		������ ������������
/// @param index	������
/// @param size		������ ������
void InsertAfterIndex(List* list, int Data, int index,int size);

/// @brief ������� ����� ��������
/// @param list ���������
/// @param Data ������ ������������
/// @param index  ������
/// @param size ������ ������
void InsertBeforeIndex(List* list, int Data, int index, int size);

/// @brief  ����������
/// @param list ���������
void Sort(List* list);

/// @brief ����� ��������
/// @param list ���������
/// @param dataItem ������� ������� 
/// @return ���������
bool LinearSearch(List* list, int data, int size);

/// @brief ������� � �����
/// @param list ���������
/// @param Data  ������ ������������

#endif	// ifndef LIST