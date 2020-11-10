#pragma once
#ifndef __COMMON_H__
#define __COMMON_H__

#include <string>

#include "List.h"


using namespace std;

/// @todo ������������� ����� � common.h � ������ � cpp ������

/// @brief	�������� �������� ������
/// @param min		����������� �����
/// @param max		������������ �����
/// @param line		�������� ������
/// @return ��������� ��������
int Security(const int min, const int max, string line);

/// @brief ����� ������ �� �����
/// @param list ���������
void ListPtint(List* list);
#endif	// ifndef __COMMON_H__


