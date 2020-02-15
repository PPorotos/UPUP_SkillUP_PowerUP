#include <stdio.h>
#include <Windows.h>

int InputNum();

void main()
{
	int number = 0, count = 0;
	int firstNum = 0, SeconNum = 0, temp = 0;

	number = InputNum();


	firstNum = number / 10;
	SeconNum = number % 10;
	temp = firstNum + SeconNum;

	while (1)
	{
		firstNum = SeconNum;
		SeconNum = temp % 10;

		temp = firstNum + SeconNum;

		count++;

		if (firstNum == number / 10 && SeconNum == number % 10)
			break;
	}

	printf("Count = %d\n", count);

	system("pause");
}

int InputNum() 
{
	int number;

	do 
	{
		scanf_s("%d", &number);
	} while (number < 0 && number > 99);

	return number;
}