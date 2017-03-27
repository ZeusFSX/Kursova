#pragma once
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctime>
#include <memory.h>
const int PMax = 500;//константа яка визначає максимальний розмір масива на всі три його проекції
const int Time = 10;//константа яка визначає кількість повторень для виміру середнього часу 

extern int Cube[PMax][PMax][PMax]; // тривимірний масив який будем сортувати розміром PMax


void EnterData(const int& P, const int& M, const int& N, const int& mode); //безтипова функція яка заповнює тривимірний масив 
																		   //згідно вибраного режиму
																		   //приймає розмір масива 
																		   //та режим заповнення

void OutputData(const int& P, const int& M, const int& N);//безтипова функція для виводу тривимірного масива по перерізам


void Menu();//безтипова функція яка надає можливість вибору розмірності тривимірного масиву та роботи певного алгоритму обходу та виводить час роботи певного алгоритму обходу
