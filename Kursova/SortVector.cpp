#include "Header.h"
clock_t SortVector(const int& N) {
	clock_t start = clock();
	for (int i = 0; i < N; i++) {
		int min = Vector[i];
		for (int j = i + 1; j < N;j++)
			if (Vector[j] < min) {
				min = Vector[j];
				Vector[j] = Vector[i];
				Vector[i] = min;
			}
	}
	clock_t end = clock();
	return end - start;
};