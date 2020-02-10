#include <stdio.h>
#include <Windows.h>

int Sum(int num1, int num2);


void main() {

	int number1, number2;

	printf("숫자를 두개 입력하세요 : ");
	scanf_s("%d, %d", &number1, number2);

	printf("두수의 합 : %d\n", Sum(number1, number2));

	system("pause");
}

int Sum(int num1, int num2) 
{
	return num1 + num2;
}