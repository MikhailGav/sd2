#include "List.h"


void Remove(List *list, int index,int size)
{
	bool isRemove = true;	// isRemove

	if ((index == 1) && (list->Head->Next))
	{
		Node* temp = list->Head;
		list->Head = list->Head->Next;
		list->Head->Prev = nullptr;
		delete temp;
		return;
	}
	else if ((index == 1) && (list->Head->Next == nullptr))
	{
		list->Head->Next = nullptr;
		list->Head = nullptr;
		delete list->Head;
		isRemove = false;
		return;
	}

	if ((index == size) && (list->Tail->Next == nullptr) && (isRemove))
	{
		Node* temp = list->Tail;
		list->Tail = list->Tail->Prev;
		list->Tail->Next = nullptr;
		delete temp;
		return;
	}

	if ((index >= 2) && (index < size) && (list->Head->Next))
	{
		Node* temp = nullptr;
		Node* tempList = list->Head;
		for (int i = 0; i < index - 1; i++)
		{
			tempList = tempList->Next;
		}
		temp = tempList; 

		temp->Prev->Next = tempList->Next;
		temp->Next->Prev = tempList->Prev;

		delete tempList;
		return;
	}
	
}


void PushBack(List *list, int Data)	// PushBack // AddTail +
{
	if (list->Head== nullptr)
	{
		list->Head = new Node;
		list->Head->Data = Data;
		list->Tail = list->Head;
		return;
	}

	Node* current = list->Head;
	while (current->Next != nullptr)
	{
		current = current->Next;
	}
	current->Next = new Node;
	current->Next->Data = Data;
	list->Tail = current->Next;
	list->Tail->Prev = current;
}



void PushFront(List* list, int Data)
{
	if (list->Head == nullptr)
	{
		list->Head = new Node;
		list->Head->Data = Data;
		return;
	}
	Node* current = list->Head;
	list->Head = new Node;
	list->Head->Data = Data;

	list->Head->Prev = nullptr;
	list->Head->Next = current;
}

void InsertAfterIndex(List* list,int Data, int index, int size)
{

	if ((index == 1) && (list->Head->Next))
	{
		Node* newNode = new Node;
		newNode->Next = list->Head->Next;
		newNode->Data = Data;
		newNode->Prev = list->Head;
		list->Head->Next = newNode;
		newNode->Next->Prev = newNode;
	}

	if ((index - 1 > size / 2) && (index != size))
	{
		Node* previous = list->Tail;

		for (int i = 0; i < size - index + 1; i++)
		{
			previous = previous->Prev;
		}
		Node* newNode = new Node;
		newNode->Next = previous->Next;
		newNode->Data = Data;
		newNode->Prev = previous;
		previous->Next = newNode;
		previous->Next->Prev = newNode;
	}
	else if ((index <= size / 2 + size % 2) && (index != 1))
	{
		Node* previous = list->Head;
		for (int i = 0; i < index - 1; i++)
		{
			previous = previous->Next;
		}
		Node* newNode = new Node;
		newNode->Next = previous->Next;
		newNode->Data = Data;
		newNode->Prev = previous;
		previous->Next = newNode;
		newNode->Next->Prev = newNode;
	}

	if (index == size) 
	{
		PushBack(list, Data);
	}
}

void InsertBeforeIndex(List* list, int Data, int index, int size)
{
	if (index == 1)
	{
		PushFront(list, Data);
		return;
	}
		

	if (index - 1 > size / 2)
	{
		
		Node* previous = list->Tail;
		for (int i = 0; i < size - index + 1; i++)
		{
			previous = previous->Prev;
		}
		Node* newNode = new Node;
		newNode->Next = previous->Next;
		newNode->Data = Data;
		newNode->Prev = previous;
		previous->Next = newNode;
		newNode->Next->Prev = newNode;
		return;
	}

	Node* previous = list->Head;
	for (int i = 0; i < index - 2; i++)
	{
		previous = previous->Next;
	}
	Node* newNode = new Node;
	newNode->Next = previous->Next;
	newNode->Data = Data;
	newNode->Prev = previous;
	previous->Next = newNode;
	newNode->Next->Prev = newNode;
		
	
}

void Sort(List* list)
{
	Node* current = list->Head;
	while (current->Next)
	{
		if ((current->Data) > (current->Next->Data))
		{
			int temp = current->Next->Data;
			current->Next->Data = current->Data;
			current->Data = temp;
			current = current->Next;
			Sort(list);
			return;

		}
		current = current->Next;
	}
}

bool LinearSearch(List* list, int data, int size)
{
	Node* temp = list->Head;

	for (int i = 0; i < size; i++)
	{
		if (data == temp->Data)
		{
			return true ;
		}

		temp = temp->Next;
	}
	return false;
}






