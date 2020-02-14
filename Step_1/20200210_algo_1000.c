#include <stdio.h>
#include <Windows.h>

int InputNum();
int Sum(int num1, int num2);


void main() {

	int number1, number2;

	printf("숫자를 두개 입력하세요\n ");

	//입력
	number1 = InputNum();
	number2 = InputNum();

	

	printf("두수의 합 : %d\n", Sum(number1, number2));

	system("pause");
}

int InputNum() 
{
	int number = 0;

	do {
		scanf_s("%d", &number);
	} while (number <= 0 && number >= 10);
	
	return number;
}

int Sum(int num1, int num2) 
{
	return num1 + num2;
}