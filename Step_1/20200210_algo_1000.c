#include <stdio.h>
#include <Windows.h>

int InputNum();
int Sum(int num1, int num2);


void main() {

	int number1, number2;

	printf("���ڸ� �ΰ� �Է��ϼ���\n ");

	//�Է�
	number1 = InputNum();
	number2 = InputNum();

	

	printf("�μ��� �� : %d\n", Sum(number1, number2));

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