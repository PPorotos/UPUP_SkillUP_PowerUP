#include <stdio.h>
#include <Windows.h>


//int InputNum();

void main() 
{
	int number1 = 0, number2 = 0;
	int temp, total = 0;

	//printf("두개의 숫자를 입력하세요 :");

	scanf("%d", &number1);
	scanf("%d", &number2);

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
	
}

int InputNum() 
{
	int number;

	do {
		scanf_s("%d", &number);
	} while (number % 100 >= 10);

	return number;
}
