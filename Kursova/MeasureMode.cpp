#include "Header.h"
#include "SortMode.h"
#include "Data.h"
#include "SortVector.h"
clock_t MeasureModeOne(const int& P, const int& M, const  int& N, const int& mode) {

	clock_t result = 0;//��������� ����� ��� �������� �������� ��������� ���� ������ �������� ��� ���������
	for (int i = 1; i <= Time; i++) {
		result += SortModeOne(P, M, N);
		EnterData(P, M, N, mode);

	}
	return (clock_t)((double)result / Time);
}
clock_t MeasureModeTwo(const int& P, const int& M, const  int& N, const int& mode) {

	clock_t result = 0;//��������� ����� ��� �������� �������� ��������� ���� ������ �������� ��� ���������
	for (int i = 1; i <= Time; i++) {
		result += SortModeTwo(P, M, N);
		EnterData(P, M, N, mode);
	}
	return (clock_t)((double)result / Time);
}
clock_t MeasureModeThree(const int& P, const int& M, const  int& N, const  int& mode) {

	clock_t result = 0; //��������� ����� ��� �������� �������� ��������� ���� ������ �������� ��� ���������
	for (int i = 1; i <= Time; i++) {
		result += SortModeThree(P, M, N);
		EnterData(P, M, N, mode);
	}
	return (clock_t)((double)result / Time);
}
clock_t MeasureModeVector(const  int& N, const  int& mode) {

	clock_t result = 0; //��������� ����� ��� �������� �������� ��������� ���� ������ �������� ��� ���������
	for (int i = 1; i <= Time; i++) {
		result += SortVector(N);
		EnterDataVector(N, mode);
	}
	return (clock_t)((double)result / Time);
}