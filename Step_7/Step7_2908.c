#include<stdio.h>
#include<Windows.h>

int GetNumber(char number[]);

void Answer2908()
{
	char number[] = "123 345";

	GetNumber(number);
}


int GetNumber(char number[])
{
	int i;
	char num1[10];
	char num2[10];

	for (i = 0; number != '\0'; i++)
	{
		if (i < 3)
			num1[i] = number[i];
		else if (i > 3)
			num2[i] = number[i];
	}

	printf("%s\n", num1);
	printf("%s\n", num2);
}