#include <stdio.h>
#include <Windows.h>

int InputNum();
void PrintStar(int count);

void main() 
{
	int count = 0;

	count = InputNum();
	PrintStar(count);
	
	system("pause");
}

int InputNum() 
{
	int number;

	do {
		scanf_s("%d", &number);
	} while (number < 1 && number > 100);

	return number;
}

void PrintStar(int count) 
{
	int i, j;

	for (i = 0; i < count; i++) {
		for (j = 0; j < count; j++) {
			if (j < count - (i + 1))
				printf(" ");
			else
				printf("*");
		}
		printf("\n");
	}
}