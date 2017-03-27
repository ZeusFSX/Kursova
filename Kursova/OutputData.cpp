#include "Header.h"

void OutputData(const int& P, const int& M, const int& N) {
	for (int k = 0; k < P; k++) {
		for (int i = 0; i < M; i++) {
			for (int j = 0; j < N; j++)	printf("%3d ",Cube[k][i][j]);
			printf("\n");
		}
		printf("\n\n");
	}
}