#include<stdio.h>
#include<Windows.h>

int InputNum();
void Calculator(int num);

void main() {

	int number = 0;

	number = InputNum();

	Calculator(number);
}

int InputNum() {
	int num = 0;

	do {
		scanf_s("%d", &num);
	} while (num <= 1 && num >= 10);
	
	return num;
}

void Calculator(int num) 
{
	int i;
	for (i = 0; i < 9; i++) 
	{
		printf("%d * %d = %d", num, i + 1, num *(i + 1));
	}
}
