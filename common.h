#pragma once
#ifndef __COMMON_H__
#define __COMMON_H__

#include <string>

#include "List.h"


using namespace std;

/// @todo переименовать файлы в common.h в связке с cpp файлом

/// @brief	Проверка входнных данных
/// @param min		минимальный порог
/// @param max		максимальный порог
/// @param line		вводимая строка
/// @return возращает значения
int Security(const int min, const int max, string line);

/// @brief вывод списка на экран
/// @param list структура
void ListPtint(List* list);
#endif	// ifndef __COMMON_H__


