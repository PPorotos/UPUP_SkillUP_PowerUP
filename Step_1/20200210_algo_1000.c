#include <stdio.h>
#include <Windows.h>

int Sum(int num1, int num2);


void main() {

	int number1, number2;

	printf("���ڸ� �ΰ� �Է��ϼ��� : ");
	scanf_s("%d, %d", &number1, number2);

	printf("�μ��� �� : %d\n", Sum(number1, number2));

	system("pause");
}

int Sum(int num1, int num2) 
{
	return num1 + num2;
}