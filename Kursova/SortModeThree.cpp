#include "Header.h"

clock_t SortModeThree(const int& P, const  int& M, const  int& N) {
	
	clock_t tstart = clock();
	for (int k = 0; k < P; k++)
		for (int j = 0; j < N; j++)
			for (int i = 0; i < M; i++) {
			{
				int min = Cube[k][i][j];
				if (i < M - 1)
					for (int s = i + 1; s < M; s++)
						if (Cube[k][s][j] < min) {
							min = Cube[k][s][j];
							Cube[k][s][j] = Cube[k][i][j];
							Cube[k][i][j] = min;
						}
				
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