#include <stdio.h>
#include <Windows.h>
#include <time.h>

void CheckNum(int* num1, int* num2);

int main()
{
	srand(time(0));
	int a, b, c;

	a = rand() % 100 + 1;
	b = rand() % 100 + 1;
	c = rand() % 100 + 1;

	int temp = 0;
	if (a < b)
	{
		temp = a;
		a = b;
		b = temp;
	}
	if (a < c)
	{
		temp = a;
		a = c;
		c = temp;
	}
	if (b < c)
	{
		temp = b;
		b = c;
		c = temp;
	}

	/*CheckNum(a, b);
	CheckNum(a, c);
	CheckNum(b, c);*/

	printf("%d\n", b);

	system("pause");

	return 0;
}

void CheckNum(int* num1, int* num2) 
{
	int temp = 0;

	if (num1 > num2)
	{
		temp = num1;
		num1 = num2;
		num2 = temp;
	}
	
}