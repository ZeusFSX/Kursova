#include "Header.h"

clock_t SortModeOne(const int& P, const  int& M, const  int& N) {
	
	int arr[MMax*NMax];//тимчасовий масив в який буде переписано всі значення перерерізу, і на якому буде відбуватися сортування
	
	clock_t tstart = clock();
	for (int k = 0; k < P; k++) {
		int temp = 0; // проядковий номер елемента в масиві

		//Запис в одновимірний тимчасовий масив перерізу
			
		for (int j = 0; j < N; j++)
			for (int i = 0; i < M; i++)
				arr[temp++] = Cube[k][i][j];


		
		// Сортування тимчасового масива
		
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

		//Запис з одновимірного масива в переріз
		temp = 0;
		for (int j = 0; j < N; j++)
			for (int i = 0; i < M; i++)
				Cube[k][i][j] = arr[temp++];
	}
	clock_t tend = clock();
	return tend - tstart;
};
clock_t SortModeTwo(const int& P, const int& M, const  int& N) {

	
	const int range = M*N; //змінна яка зберігає значення кількості елементів в переріз
	// Використовуєм нові змінні для визначення поточного рядка та стовпця
	int divi = 0;	// Ціла частина від ділення і на М
	int modi = 0;	// Остача від ділення і на М
	int carry = 0;	// Змінна яка вказує чи потрібно переходити на наступний рядок  або стовпець

	clock_t tstart = clock();
	
	for (int k = 0; k < P; k++)
		for (int i = 0; i < (range - 1); i++) {
			int min = Cube[k][modi][divi];

			int divj = (i + 1) / M; // Ціла частина від ділення j на М						 
			int modj = (i + 1) % M; // Остача від ділення j на М

			for (int j = i + 1; j < range; j++) {

				if (Cube[k][modj][divj] < min) {
					min = Cube[k][modj][divj];
					Cube[k][modj][divj] = Cube[k][modi][divi];
					Cube[k][modi][divi] = min;
				}
			 		
				// обновлення елементів divj та modj
				carry = ++modj >= M; 	
				divj += carry;
				if (carry) modj = 0;
			}
			//обновлення елементів divi та modi
			carry = ++modi >= M; 
			divi += carry;
			if (carry) modi = 0;
		}
	clock_t tend = clock();
	return tend - tstart;
}
clock_t SortModeThree(const int& P, const  int& M, const  int& N) {

	clock_t tstart = clock();
	for (int k = 0; k < P; k++)
		for (int j = 0; j < N; j++)
			for (int i = 0; i < M; i++) {
				{
					int min = Cube[k][i][j];//тимчасова змінна яка яка зберігає мінімальне значення
					
					// Cортування до кінця поточного стовпця
					if (i < M - 1)
						for (int s = i + 1; s < M; s++)
							if (Cube[k][s][j] < min) {
								min = Cube[k][s][j];
								Cube[k][s][j] = Cube[k][i][j];
								Cube[k][i][j] = min;
							}
					// Cортування до кінця поточного перерізу
					for (int s = j + 1; s < N; s++)
						for (int r = 0; r < M; r++)
							if (Cube[k][r][s] < min) {
								min = Cube[k][r][s];
								Cube[k][r][s] = Cube[k][i][j];
								Cube[k][i][j] = min;
							}
				}

			}
	clock_t tend = clock();
	return tend - tstart;
}