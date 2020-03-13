#include <stdio.h>
#include <Windows.h>

int SumNum(unsigned long long number);

void Answer11720()
{
	printf("%d\n", SumNum(70000));
}

int SumNum(unsigned long long number)
{
	int temp = 1;
	int total = 0;

	printf("1 = %d\n", number);
	while (1)
	{
		if (number / temp == 0)
			break;

		temp *= 10;

		if(number % temp / (temp / 10) > 0)
			total += number % temp / (temp / 10);
	}

	return total;
}