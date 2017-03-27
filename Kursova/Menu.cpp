#include "Header.h"
#include "Measure.h"
#include "SortMode.h"
void Menu() {
	int p, //змінна в які зберігається кількість перерізів
		m, //змінна в якій зберігається кількість строк у кожному перерізі
		n, //змінна в якій зберігається кількість стовбців у кожному перерізі
		test;
		
	printf("Do you see if program sorted mas?\n 1 - Yes\n 2 - No\n");
	scanf("%d", &test);
	switch (test) {
	case 1:
		p = 2, m = 3, n = 4;
		EnterData(p, m, n, 3);
		printf("Mass before:\n");
		OutputData(p, m, n);
		printf("Task 1: \n");
		SortModeOne(p, m, n);
		printf("Mass after:\n");
		OutputData(p, m, n);

		EnterData(p, m, n, 3);
		printf("Mass before:\n");
		OutputData(p, m, n);
		printf("Task 2:\n");
		SortModeTwo(p, m, n);
		printf("Mass after:\n");
		OutputData(p, m, n);

		EnterData(p, m, n, 3);
		printf("Mass before:\n");
		OutputData(p, m, n);
		printf("Task 3:\n");
		SortModeThree(p, m, n);
		printf("Mass after:\n");
		OutputData(p, m, n);

		break;
	case 2:
		printf("Hello! \nPlease enter a size three-dimensional panels (p, m, n) <=500:\n");
		scanf("%d%d%d", &p, &m, &n);

		printf("\tSorted\tRandom\tReverse\n");
		printf("Task 1: %.lf\t%.lf\t%.lf\n", ((double)MeasureModeOne(p, m, n, 1) / CLOCKS_PER_SEC) * 100, ((double)MeasureModeOne(p, m, n, 2) / CLOCKS_PER_SEC) * 100, ((double)MeasureModeOne(p, m, n, 3) / CLOCKS_PER_SEC) * 100);
		printf("Task 2: %.lf\t%.lf\t%.lf\n", ((double)MeasureModeTwo(p, m, n, 1) / CLOCKS_PER_SEC) * 100, ((double)MeasureModeTwo(p, m, n, 2) / CLOCKS_PER_SEC) * 100, ((double)MeasureModeTwo(p, m, n, 3) / CLOCKS_PER_SEC) * 100);
		printf("Task 3: %.lf\t%.lf\t%.lf\n", ((double)MeasureModeThree(p, m, n, 1) / CLOCKS_PER_SEC) * 100, ((double)MeasureModeThree(p, m, n, 2) / CLOCKS_PER_SEC) * 100, ((double)MeasureModeThree(p, m, n, 3) / CLOCKS_PER_SEC) * 100);
		break;
	
	default:
		break;
	}
};