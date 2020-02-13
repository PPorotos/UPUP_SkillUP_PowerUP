#include <stdio.h>
#include <Windows.h>

int InputNum();

void main() 
{
	int number1 = 0, number2 = 0;

	printf("두 수를 입력하세요 : \n");

	number1 = InputNum();
	number2 = InputNum();

	CheckSize(number1, number2);

	system("pause");
}

int InputNum() 
{
	int number = 0;

	do 
	{
		scanf_s("%d", &number);

	} while (number < -10000 && number > 10000);

	return number;
}

void CheckSize(int num1, int num2) 
{
	if (num1 > num2)
		printf(">");
	else if (num1 < num2)
		printf("<");
	else
		printf("==");
}