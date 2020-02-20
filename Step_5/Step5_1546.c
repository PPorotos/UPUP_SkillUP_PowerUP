#include <stdio.h>
#include <Windows.h>
#include <time.h>

int main() {
	
	srand(time(0));

	int count = 0, i, max, total = 0;
	int* scores;

	count = rand() % 1001 + 1;
	scores = (int*)malloc(sizeof(int) * count);


	for (i = 0; i < count; i++) 
	{
		scores[i] = rand() % 101 + 1;
		
		if (i == 0)
			max = scores[i];
		else if (max < scores[i])
			max = scores[i];
	}

	for (i = 0; i < count; i++) 
	{
		total += (scores[i] / max * 100);
	}

	printf("%f\n", (float)total / count);
	
	system("pause");
	return 0;
}