#pragma once
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctime>
#include <memory.h>
const int PMax = 500;
const int Time = 10;

extern int Cube[PMax][PMax][PMax];

clock_t SortModeOne(const int& P, const int& M, const int& N);
clock_t SortModeTwo(const int& P, const int& M, const  int& N);
clock_t SortModeThree(const int& P, const  int& M, const int& N);

clock_t MeasureModeOne(const int& P, const int& M, const int& N, const int& mode);
clock_t MeasureModeTwo(const int& P, const int& M, const int& N, const  int& mode);
clock_t MeasureModeThree(const int& P, const int& M, const int& N, const  int& mode);

void EnterData(const int& P, const int& M, const int& N, const int& mode);
void OutputData(const int& P, const int& M, const int& N);
void Menu();
