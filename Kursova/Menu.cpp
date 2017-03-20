#include "Header.h"

void Menu() {
	int p, m, n, mode, task;
	printf("Hello! \nPlease enter a size three-dimensional panels p, m, n:\n");
	scanf("%d%d%d", &p, &m, &n);
	printf("Okay, and now plese enter a mode of filling\n1-Sorted\n2-Random\n3-Reverse\n ");
	scanf("%d", &mode);
	EnterData(p, m, n, mode);
	
	/*OutputData(p, m, n);
	printf("I`m working: %dms\n", SortModeOne(p, m, n)); 
	OutputData(p, m, n);*/
	
	printf("Please select task: 1, 2 or 3:\n");
	printf("If you see the result work all task enter 4: \n");
	scanf("%d", &task);
	switch (task)
	{
	case 1: printf("I`m working: %dms\n", MeasureModeOne(p, m, n, mode)); break;
	case 2: printf("I`m working: %dms\n", MeasureModeTwo(p, m, n, mode)); break;
	case 3: printf("I`m working: %dms\n", MeasureModeThree(p, m, n, mode)); break;
	case 4:
		printf("Task 1: %dms\n", MeasureModeOne(p, m, n, mode));
		printf("Task 2: %dms\n", MeasureModeTwo(p, m, n, mode));
		printf("Task 3: %dms\n", MeasureModeThree(p, m, n, mode));
		break;
	default:
		break;
	}
};