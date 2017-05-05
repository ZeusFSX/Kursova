#include "Header.h"

void OutputData(const int& P, const int& M, const int& N) {
	for (int k = 0; k < P; k++) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++)	printf("%3d ", Cube[k][i][j]);
			printf("\n");
		}
		printf("\n\n");
	}
}

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
					Cube[k][i][j] = (rand() % 10000) - 5000;//рандомне заповнення в діапазоні від -5000 до 10000
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
};
void EnterDataVector(const int& N, const int& mode) {
	
	int temp = 0;//тимчасова змінна яка використовується для зберігання значень якими заповнюється тривимірний масив
	switch (mode)
	{
	case 1:
		for (int i = 0; i < N; i++)
			Vector[i] = temp++; //послідовне заповнення
		break;
	case 2:
		for (int i = 0; i < N; i++)
			Vector[i] = (rand() % 10000) - 5000;//рандомне заповнення в діапазоні від -5000 до 10000
		break;
	case 3:
		temp = N;
		for (int i = 0; i < N; i++)
			Vector[i] = temp--;//обернене заповнення
		break;
	default:
		break;
	}
};
void OutputDataVector(const int& N) {
	for (int i = 0; i < N; i++)
		printf("%d ", Vector[i]);
	printf("\n");
}
