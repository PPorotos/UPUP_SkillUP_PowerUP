#include <stdio.h>

int main()
{
	int num = 0;
	int answer = 0;

	scanf("%d", &num);

	if (num < 5 && num % 3 != 0)
		printf("-1\n");
	else if (num % 5 % 3 == 0)
	{
		answer += (num / 5);
		answer += (num % 5) / 3;

		printf("%d\n", answer);
	}
	else
	{
		if ((num % 5 + 5) % 3 != 0)
			printf("-1\n");
		else 
		{
			answer += (num / 5 - 1);
			answer += ((num % 5 + 5) / 3);

			printf("%d\n", answer);
		}
	}

	return 0;
}