#include <stdio.h>
#include <Windows.h>


int InputNum();

void main() 
{
	int number1 = 0, number2 = 0;
	int temp, total = 0;

	printf("�ΰ��� ���ڸ� �Է��ϼ��� :");

	number1 = InputNum();
	number2 = InputNum();

	temp = number1 * (number2 % 10);
	total += temp;
	printf("%d\n", temp);
	temp = number1 * ((number2 % 100) / 10);
	total += temp * 10;
	printf("%d\n", temp);
	temp = number1 * (number2 / 100);
	total += temp * 100;
	printf("%d\n", temp);

	printf("%d\n", total);
	system("pause");
}

int InputNum() 
{
	int number;

	do {
		scanf_s("%d", &number);
	} while (number % 100 >= 10);

	return number;
}