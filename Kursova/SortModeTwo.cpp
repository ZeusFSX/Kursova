#include"Header.h"

clock_t SortModeTwo(const int& P, const int& M, const  int& N) {
	
	clock_t tstart = clock();
	const int range = M*N;
	int divi = 0;
	int modi = 0;
	int carry = 0;

	for (int k = 0; k < P; k++)
		for (int i = 0; i < range - 1; i++) {
			int min = Cube[k][modi][divi];

			int divj = (i + 1) / M;
			int modj = (i + 1) % M;

			for (int j = i + 1; j < range; j++) {

				if (Cube[k][modj][divj] < min) {
					min = Cube[k][modj][divj];
					Cube[k][modj][divj] = Cube[k][modi][divi];
					Cube[k][modi][divi] = min;
				}

				carry = ++modj >= M;
				divj += carry;
				if (carry) modj = 0;
			}

			carry = ++modi >= M;
			divi += carry;
			if (carry) modi = 0;
		}
	clock_t tend = clock();
	return tend - tstart;
}