#pragma once
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctime>
#include <memory.h>
const int PMax = 500;//��������� ��� ������� ������������ ����� ������ �� �� ��� ���� ��������
const int Time = 10;//��������� ��� ������� ������� ��������� ��� ����� ���������� ���� 

extern int Cube[PMax][PMax][PMax]; // ���������� ����� ���� ����� ��������� ������� PMax


void EnterData(const int& P, const int& M, const int& N, const int& mode); //��������� ������� ��� �������� ���������� ����� 
																		   //����� ��������� ������
																		   //������ ����� ������ 
																		   //�� ����� ����������

void OutputData(const int& P, const int& M, const int& N);//��������� ������� ��� ������ ����������� ������ �� ��������


void Menu();//��������� ������� ��� ���� ��������� ������ ��������� ����������� ������ �� ������ ������� ��������� ������ �� �������� ��� ������ ������� ��������� ������
