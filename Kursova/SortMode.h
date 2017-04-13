#pragma once
#include "Header.h"

//алгоритм обходу номер 1 
//на вхід приймає розмірність тривимірного масиву на три координати 
//на вихід видає час роботи алгоритму
clock_t SortModeOne(const int& P, const int& M, const int& N); 

// алгоритм обходу номер 2
//на вхід приймає розмірність тривимірного масиву на три координати 
//на вихід видає час роботи алгоритму
clock_t SortModeTwo(const int& P, const int& M, const  int& N);

/**  алгоритм обходу номер 3
  *  на вхід приймає розмірність масиву (глубина, ширина, висота) 
  *  повертає час роботи алгоритму
  */
clock_t SortModeThree(const int& P, const  int& M, const int& N);
