#include "Header.h"
#include "Measure.h"
#include "SortMode.h"
#include "Menu.h"
void Menu() {
	long long p, //����� � �� ���������� ������� �������
		m, //����� � ��� ���������� ������� ����� � ������� ������
		n; //����� � ��� ���������� ������� �������� � ������� ������
	char test;
		
	printf("Do you see if program sorted array?\n y or n\n");
	scanf("%c", &test);
	switch (test) {
	case 'y':
		p = 2, m = 3, n = 4;
		EnterData(p, m, n, 3);
		printf("Array before:\n");
		OutputData(p, m, n);
		printf("Task 1: \n");
		SortModeOne(p, m, n);
		printf("Array after:\n");
		OutputData(p, m, n);

		EnterData(p, m, n, 3);
		printf("Array before:\n");
		OutputData(p, m, n);
		printf("Task 2:\n");
		SortModeTwo(p, m, n);
		printf("Array after:\n");
		OutputData(p, m, n);

		EnterData(p, m, n, 3);
		printf("Array before:\n");
		OutputData(p, m, n);
		printf("Task 3:\n");
		SortModeThree(p, m, n);
		printf("Array after:\n");
		OutputData(p, m, n);

		break;
	case 'n':
		printf("Hello! \nPlease enter a size three-dimensional panels (p, m, n) <=500:\n");
		scanf("%d%d%d", &p, &m, &n);
		//printf("%d %d %d \n", p, m, n);
		printf("\tSorted\t\tRandom\t\tReverse\n");
		printf("Task 1: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeOne(p, m, n, 1), (double)MeasureModeOne(p, m, n, 2), (double)MeasureModeOne(p, m, n, 3));
		printf("Task 2: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeTwo(p, m, n, 1), (double)MeasureModeTwo(p, m, n, 2), (double)MeasureModeTwo(p, m, n, 3));
		printf("Task 3: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeThree(p, m, n, 1) , (double)MeasureModeThree(p, m, n, 2), (double)MeasureModeThree(p, m, n, 3));
		break;
	
	default:
		break;
	}
};

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
	int temp = 0;//��������� ����� ��� ��������������� ��� ��������� ������� ����� ������������ ���������� �����
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
					Cube[k][i][j] = (rand() % 1000) - 500;//�������� ���������� � ������� �� -500 �� 1000
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