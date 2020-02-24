#include <stdio.h>
#include <Windows.h>
#include <time.h>	

int main() {

	int A = 0, B = 0, C = 0;
	int counts[10] = { 0, };
	A = 150;
	B = 266;
	C = 427;
	int number = A * B * C;
	int value = 10;
	int i = 0;

	while (number / value != 0)
	{
		i = (number % value) / (value / 10);
		counts[i]++;

		value *= 10;
	}

	i = (number % value) / (value / 10);
	counts[i]++;

	int size = sizeof(counts) / sizeof(int);
	
	for(i = 0; i<size; i++)
	{
		printf("%d\n", counts[i]);
	}

	system("pause");

	return 0;
}