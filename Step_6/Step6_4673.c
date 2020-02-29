#include<stdio.h>
#include<Windows.h>

void SelfNum(int num, int* numbers);

int main()
{
	int* numbers;
	int i;
	numbers = (int*)malloc(sizeof(int) * 10000);

	for (i = 0; i < 10000; i++)
	{
		numbers[i] = 0;
	}

	SelfNum(1, numbers);

	/*for (i = 0; i < 10000; i++)
	{
		if (numbers[i] == 0)
			printf("%d\n", i + 1);
	}
*/
	system("pause");
	return 0;
}

void SelfNum(int num, int* numbers)
{
	if (num > 10000)
		return;

	int value = 0, total = 0, count = 1;

	value = num / count;
	while (value != 0)
	{
		count *= 10;
		value = num / count;
	}

	total += num;
		
	while (count != 1)
	{
		total += (num % count) / (count / 10);
		count /= 10;
	}

	printf("%d\n", total);

	numbers[total] = 1;
	SelfNum(total, numbers);
}