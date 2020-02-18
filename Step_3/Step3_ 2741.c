#include <stdio.h>
#include <Windows.h>

int InputNum();
void PrintNum(int number);

void main() 
{
	int number = 0;

	number = InputNum();
	PrintNum(number);
}

int InputNum() 
{
	int number;

	do {
		scanf_s("%d", &number);
	} while (number <= 0 && number > 100000);

	return number;
}

void PrintNum(int number) {

	int i;
	for (i = 1; i <= number; i++) {

		printf("%d\n", i);
	}
}