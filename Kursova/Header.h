#pragma once
 
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
#include <ctime>
#include <memory.h>

const int PMax = 50;//максимальний розмір масива у глибину
const int MMax = 50;//максимальний розмір масива у ширину
const int NMax = 1000;//визначає максимальний розмір масива у довжину
const int Time = 10;//кількість повторень для виміру середнього часу 
extern int Vector[PMax*MMax*NMax];//вектор який будем сортувати
extern int Cube[PMax][MMax][NMax]; // тривимірний масив який будем сортувати