#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main() {
	
	srand(time(0));

	int count = rand() % 1001 + 1;
	int* scores;
	int i = 0, max = 0;
	float total = 0;

	scores = (int*)malloc(sizeof(int) * count);

	for (i = 0; i < count; i++) 
	{
		scores[i] = rand() % 101 + 1;

		if (max < scores[i])
			max = scores[i];
	}
	for (i = 0; i < count; i++)
	{
		float temp = 0;
		temp =scores[i] / (float)max * 100;
		total += temp;
	}

	printf("%f\n", total / (float)count);

	system("pause");
	return 0;
}