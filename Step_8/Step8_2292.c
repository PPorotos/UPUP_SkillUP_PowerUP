#include <stdio.h>

int main2292()
{
	int num = 0; 
	int count = 1;
	int temp = 1;

	scanf("%d", &num);

	while(1)
	{
		if (temp >= num)
			break;

		temp += (count * 6);
		count++;
	}
	printf("%d\n", count);

	return 0;
}