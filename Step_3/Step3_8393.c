#include <stdio.h>
#include <windows.h>

int InputNum();
int CheckNum(int num);
int TotalNumber(int number);

void main() 
{
	int number = 0;

	int number = InputNum();

	printf("%d\n", TotalNumber(number));
}

int InputNum() {

	int num = 0;

	while (1) {
		
		if (CheckNum(num) == 1)
			break;

		scanf_s("%d", &num);
	}

	return num;
}

int CheckNum(int num)
{
	if (num >= 1 && num <= 10000)
		return 1;
	else
		return 0;
}

int TotalNumber(int number) 
{
	int total = 0, i;
	for (i = 0; i <= number; i++) {
		total += i;
	}

	return total;
}