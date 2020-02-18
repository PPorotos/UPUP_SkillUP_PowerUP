#include <stdio.h>
#include <Windows.h>
#include <time.h>	

int main() {
	
	srand(time(0));

	int count = 0, i;
	int* numbers;
	int min = 0, max = 0;

	count = rand() % 1000001 + 1;
	numbers = (int*)malloc(sizeof(int) * count);

	for (i = 0; i < count; i++) 
	{
		numbers[i] = (rand() % 1000001) - (rand() % 1000001);
		
		if (i == 0)
		{
			min = numbers[i];
			max = numbers[i];
		}
		if (min > numbers[i])
			min = numbers[i];
		if (max < numbers[i])
			max = numbers[i];
		
	}

	printf("%d %d\n", min, max);

	if (numbers != 0) {
		free(numbers);
		numbers = 0;
	}

	system("pause");
	return 0;
}