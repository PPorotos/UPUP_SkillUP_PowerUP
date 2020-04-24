#include <stdio.h>

int main2839()
{
	int num = 0;
	int count = 0;

	scanf_s("%d", &num);

	while (1)
	{
		if (num % 5 == 0)
		{
			count += (num / 5);
			break;
		}
		else if (num < 3)
		{
			count = -1;
			break;
		}
		num -= 3;
		count++;
	}
	printf("%d\n", count);

	return 0;
}