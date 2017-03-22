#include "Header.h"

void EnterData(const int& P, const int& M, const  int& N, const  int& mode) {
	int temp = 0;
	switch (mode)
	{
	case 1:
		for (int k = 0; k < P; k++)
			for (int j = 0; j < N; j++)
				for (int i = 0; i < M; i++)
					Cube[k][i][j] = temp++; //��������� ����������
		break;
	case 2:
		for (int k = 0; k < P; k++)
			for (int j = 0; j < N; j++)
				for (int i = 0; i < M; i++)
					Cube[k][i][j] = (rand() % 1000) - 500;//�������� ����������
		break;
	case 3:
		temp = P*M*N;
		for (int k = 0; k < P; k++)
			for (int j = 0; j < N; j++)
				for (int i = 0; i < M; i++)
					Cube[k][i][j] = temp--;//�������� ����������
		break;
	default:
		break;
	}
}
