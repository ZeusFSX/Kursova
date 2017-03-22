#include "Header.h"

void Menu() {
	int p, //змінна в які зберігається кількість перерізів
		m, //змінна в якій зберігається кількість строк у кожному перерізі
		n, //змінна в якій зберігається кількість стовбців у кожному перерізі
		mode, // змінна в якій зберігається режим в якому тривимірний масив буде упарядкований до сортування
		task; // змінна в якій зберігається номер для вибору алгоритму обходу
	printf("Hello! \nPlease enter a size three-dimensional panels (p, m, n) <=500:\n");
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
	case 1: printf("I`m working: %dms\n", ((double)MeasureModeOne(p, m, n, mode) / CLOCKS_PER_SEC) * 100); break;
	case 2: printf("I`m working: %dms\n", ((double)MeasureModeTwo(p, m, n, mode) / CLOCKS_PER_SEC) * 100); break;
	case 3: printf("I`m working: %dms\n", ((double)MeasureModeThree(p, m, n, mode) / CLOCKS_PER_SEC) * 100); break;
	case 4:
		printf("Task 1: %.lfms\n", ((double)MeasureModeOne(p, m, n, mode)/ CLOCKS_PER_SEC)*100);
		printf("Task 2: %.lfms\n", ((double)MeasureModeTwo(p, m, n, mode)/ CLOCKS_PER_SEC) * 100);
		printf("Task 3: %.lfms\n", ((double)MeasureModeThree(p, m, n, mode)/ CLOCKS_PER_SEC) * 100);
		break;
	default:
		break;
	}
};