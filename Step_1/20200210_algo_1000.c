#include <stdio.h>
#include <Windows.h>

int InputNum();
int CheckNum1(int number);
int CheckNum2(int number);
int Sum(int num1, int num2);


void main() {

	int number1, number2;

	printf("숫자를 두개 입력하세요\n ");

	//입력
	number1 = InputNum();
	number2 = InputNum();

	//숫자 체크 후 상황에 따라 다시입력
	number1 = CheckNum1(number1);
	number2 = CheckNum2(number2);

	printf("두수의 합 : %d\n", Sum(number1, number2));

	system("pause");
}

int InputNum() 
{
	int number = 0;

	scanf_s("%d", number);
	
	return number;
}

int CheckNum1(int number) 
{
	int tempNum = number;

	while (1) 
	{
		if (0 < tempNum)
			break;

		tempNum = InputNum();
	}

	return tempNum;
}

int CheckNum2(int number)
{
	int tempNum = number;

	while (1)
	{
		if (tempNum > 10)
			break;

		tempNum = InputNum();
	}

	return tempNum;
}

int Sum(int num1, int num2) 
{
	return num1 + num2;
}