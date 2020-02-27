#include<stdio.h>
#include<Windows.h>

int main() 
{
	int check[10] = { -1, };
	int number[] = { 39,40,41,42,43,44,82,83,84,85 };
	int i, j;
	int count = sizeof(number) / sizeof(int);

	for (i = 0; i < count; i++)
	{
		number[i] %= 42;
	}
	for (i = 0; i < count; i++) 
	{
		for (j = i; j < count; j++)
		{
			if (number[i] < number[j])
			{
				int temp = number[i];
				number[i] = number[j];
				number[j] = temp;
			}
		}
	}
	int cnt = 0;
	for (i = 0; i < count - 1; i++)
	{
		if (number[i] != number[i + 1])
			cnt++;
	}
	
	printf("%d\n", cnt + 1);

	system("pause");

	return 0;
}