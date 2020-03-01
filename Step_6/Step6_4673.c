#include<stdio.h>
#include<Windows.h>

void SelfNum(int num, int* arr);

int main()
{
	int* arr;
	int i;

	arr = (int*)malloc(sizeof(int) * 10000);

	for (i = 0; i < 10000; i++)
		arr[i] = 0;

	for(i = 0; i<10000; i++)
		SelfNum(i+1, arr);

	for (i = 0; i < 10000; i++)
		if (arr[i] == 0)
			printf("%d\n", i + 1);

	system("pause");
	return 0;
}

void SelfNum(int num, int* arr)
{
	int temp = 1;
	int total = num;

	while (1)
	{
		if (num / temp == 0)
			break;

		temp *= 10;
		total += num % temp / (temp / 10);
	}

	if (total <= 10000)
		arr[total - 1] = 1;

}