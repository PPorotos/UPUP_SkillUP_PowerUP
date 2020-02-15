#include<stdio.h>
#include<Windows.h>

int InputNum();
int CheckYear(int year);

void main() 
{
	int year = 0;

	year = InputNum();

	printf("%d\n", CheckYear(year));
}

int InputNum() 
{
	int year;

	do {
		scanf_s("%d", &year);
	} while (year < 1 && year > 4000);

	return year;
}

int CheckYear(int year) 
{
	if (year % 4 == 0 && year % 100 != 0 && year % 400 == 0)
		return 1;
	else
		return 0;
}