#include <stdio.h>
#include <Windows.h>

float SumNum(int number);
void Answer11720();

void Answer11720()
{
	printf("%d\n", SumNum(700000000000000000));
}

float SumNum(int number)
{
	int temp = 1;
	float total = 0;

	while (1)
	{
		if (number / temp == 0)
			break;

		temp *= 10;

		if(number % temp / (temp / 10) > 0)
			total += number % temp / (temp / 10);
		printf("1 = %d\n", total);
	}

	return total;
}