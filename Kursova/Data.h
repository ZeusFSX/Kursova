#pragma once
/*	*	Функція яка заповнює масив
*	згідно вибраного режиму
*	на вхід приймає розмір масива (глубина, висота , ширина)
*	та режим заповнення
*/
void EnterData(const int& P, const int& M, const int& N, const int& mode);

/*	*	Функція для виводу на екран тривимірного масива по перерізам
	*	на вхід приймає розмір масива (глубина, висота , ширина)
	*/

void OutputData(const int& P, const int& M, const int& N);

/*	*	Функція для заповнення вектора 
	*	на вхід приймає розмір вектора та режим заповнення
*/
void EnterDataVector(const int& N, const int& mode);

/*	*	Функція для виводу на екран вектора
	*	на вхід приймає розмір масиву
	*/
void OutputDataVector(const int& N);