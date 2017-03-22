#include "Header.h"

clock_t SortModeOne(const int& P, const  int& M, const  int& N) {
	clock_t tstart = clock();
	int arr[PMax*PMax];//тимчасовий масив в який буде переписано всі значення перерерізу, і на якому буде відбуватися сортування
	for (int k = 0; k < P; k++) {
		int temp = 0;
		//Запис в одновимірний тимчасовий масив розміром M*N-1 матриці М*N
		for (int i = 0; i < M; ++i) {
			memcpy(arr+temp, Cube[k][i], sizeof(int) * N);
			temp += N;
		}

		//Сортування тимчасового масива
		const int range = M*N;
		for (int s = 0; s < range; s++) {
			int min = arr[s];
			for (int i = s + 1; i < range; i++)
				if (arr[i] < min) {
					min = arr[i];
					arr[i] = arr[s];
					arr[s] = min;
				}
		}

		//Запис з одновимірного масива в обратно
		temp = 0;
		for (int j = 0; j < N; j++)
			for (int i = 0; i < M; i++)
				Cube[k][i][j] = arr[temp++];
	}
	clock_t tend = clock();
	return tend - tstart;
};