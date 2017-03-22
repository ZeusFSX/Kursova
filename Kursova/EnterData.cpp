#include "Header.h"

void EnterData(const int& P, const int& M, const  int& N, const  int& mode) {
	int temp = 0;//тимчасова змінна яка використовується для зберігання значень якими заповнюється тривимірний масив
	switch (mode)
	{
	case 1:
		for (int k = 0; k < P; k++)
			for (int j = 0; j < N; j++)
				for (int i = 0; i < M; i++)
					Cube[k][i][j] = temp++; //послідовне заповнення
		break;
	case 2:
		for (int k = 0; k < P; k++)
			for (int j = 0; j < N; j++)
				for (int i = 0; i < M; i++)
					Cube[k][i][j] = (rand() % 1000) - 500;//рандомне заповнення в діапазоні від -500 до 1000
		break;
	case 3:
		temp = P*M*N;
		for (int k = 0; k < P; k++)
			for (int j = 0; j < N; j++)
				for (int i = 0; i < M; i++)
					Cube[k][i][j] = temp--;//обернене заповнення
		break;
	default:
		break;
	}
}
