#pragma once
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctime>
#include <memory.h>

const int PMax = 50;//������������ ����� ������ � �������
const int MMax = 50;//������������ ����� ������ � ������
const int NMax = 1000;//������� ������������ ����� ������ � �������
const int Time = 10;//������� ��������� ��� ����� ���������� ���� 
extern int Vector[PMax*MMax*NMax];//������ ���� ����� ���������
extern int Cube[PMax][MMax][NMax]; // ���������� ����� ���� ����� ���������