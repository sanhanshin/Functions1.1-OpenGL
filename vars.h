#pragma once

#include "flags.h"

int 
WindowSize = 1000,
PRESET = 0;

double 
xAxisPos = 0.0, yAxisPos = 0.0, //��������� ���� X � Y �� ������ �� -1.0 �� +1.0
GridSize = 0.2, // ������� ������ �����
xPoint, yPoint, // ���������� �����, ������������ � ������� ���
PRECISION = 0.1; // �������� �����������

// ���� ������ ������ ������� ����� ��� ������ ���� �� �������� ������������ ����������
char NumberElements[] = { 119, 36, 93, 109, 46, 107, 123, 39, 127, 111 };

// ����� ����������� ���������
bool FLAGS[] = {0, 0, 0, 0, 1, 1};