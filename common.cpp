#include "common.h"

#include <iostream>

using namespace std;


int Security(const int min, const int max, string line)
{
    string list;
    int value = 0;
    bool isWrong = true;
    while (isWrong)
    {
        int temp, current = 0;
        cin >> line;
        isWrong = false;
        for (int i = 0; i < line.size(); i++)
        {
            current += line[i] - 48;

            if (line.size() > 1 && i < line.size() - 1)
            {
                current *= 10;
            }
        }
        if (current >= min && current <= max)
        {
            for (int i = 0; i < line.size(); i++)
            {
                temp = line[i];

                if (temp < 48 || temp  > 57)
                {
                    cout << endl << "Введено неверное значение. Повторите попытку  ";
                    isWrong = true;
                    break;
                }
            }
        }
        else
        {
            cout << endl << "Введено неверное значение. Повторите попытку  ";
            isWrong = true;
        }
        if (!isWrong)
        {
            value = current;
        }
    }
    return value;
}


void ListPtint(List* list)
{
    Node* temp = list->Head;

    while (temp != nullptr)
    {
        cout << temp->Data << "   ";
        temp = temp->Next;
    }
    cout << endl;
}
