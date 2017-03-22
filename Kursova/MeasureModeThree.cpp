#include "Header.h"
clock_t MeasureModeThree(const int& P, const int& M, const  int& N, const  int& mode) {
	
	clock_t result= 0; //��������� ����� ��� �������� �������� ��������� ���� ������ �������� ��� ���������
	for (int i = 1; i <= Time; i++) {
		result += SortModeThree(P, M, N);
		EnterData(P, M, N, mode);
	}
	return (clock_t)((double) result / Time);
}
