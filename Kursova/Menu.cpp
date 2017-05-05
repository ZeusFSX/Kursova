#include "Header.h"
#include "Measure.h"
#include "SortMode.h"
#include "SortVector.h"
#include "Data.h"
void Menu() {
	long long p, //змінна в які зберігається кількість перерізів
		m, //змінна в якій зберігається кількість строк у кожному перерізі
		n; //змінна в якій зберігається кількість стовбців у кожному перерізі
	char test;
		
	printf("Select test mode:\n1: Test sorting \n2: Measure time for Vector\n3: Measure time for Cube\nYour choice: ");
	scanf("%c", &test);
	switch (test) {
	case '1':
		p = 2, m = 3, n = 4;
		EnterData(p, m, n, 3);
		printf("Array before:\n");
		OutputData(p, m, n);
		printf("Task 1: \n");
		SortModeOne(p, m, n);
		printf("Array after:\n");
		OutputData(p, m, n);

		EnterData(p, m, n, 3);
		printf("Array before:\n");
		OutputData(p, m, n);
		printf("Task 2:\n");
		SortModeTwo(p, m, n);
		printf("Array after:\n");
		OutputData(p, m, n);

		EnterData(p, m, n, 3);
		printf("Array before:\n");
		OutputData(p, m, n);
		printf("Task 3:\n");
		SortModeThree(p, m, n);
		printf("Array after:\n");
		OutputData(p, m, n);

		printf("Sorting Vector:\n\nArray before : \n");
		EnterDataVector(n*2, 3);
		OutputDataVector(n * 2);
		SortVector(n*2);
		printf("Array after:\n");
		OutputDataVector(n*2);

		break;
	case '2':
		printf("Hello! \nPlease enter a size masive: ");
		scanf("%d", &n);
		printf("\tSorted\t\tRandom\t\tReverse\n");
		printf("Vector: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeVector(n, 1), (double)MeasureModeVector(n, 2), (double)MeasureModeVector(n, 3));
		break;
	case '3':
		printf("Hello! \nPlease enter a size three-dimensional panels (p, m, n) < 500:\n");
		scanf("%d%d%d", &p, &m, &n);
		//printf("%d %d %d \n", p, m, n);
		printf("\tSorted\t\tRandom\t\tReverse\n");
		printf("Task 1: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeOne(p, m, n, 1), (double)MeasureModeOne(p, m, n, 2), (double)MeasureModeOne(p, m, n, 3));
		printf("Task 2: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeTwo(p, m, n, 1), (double)MeasureModeTwo(p, m, n, 2), (double)MeasureModeTwo(p, m, n, 3));
		printf("Task 3: %.lf\t\t%.lf\t\t%.lf\n", (double)MeasureModeThree(p, m, n, 1) , (double)MeasureModeThree(p, m, n, 2), (double)MeasureModeThree(p, m, n, 3));
		break;
	
	default:
		break;
	}
};

