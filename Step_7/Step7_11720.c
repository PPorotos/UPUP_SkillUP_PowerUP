#include <stdio.h>
#include <Windows.h>

int SumNum(int number);

int main()
{
	printf("%d\n", SumNum(700000000));

	system("pause");
	return 0;
}

int SumNum(int number)
{
	int temp = 1;
	int total = 0;

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