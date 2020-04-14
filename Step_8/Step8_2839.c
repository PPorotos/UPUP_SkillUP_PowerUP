#include <stdio.h>
#include <Windows.h>

int main()
{
	int num = 0;
	int answer = 0;
	//scanf("%d", &num);

	/*if (num < 5 && num % 3 != 0)
		printf("-1\n");
	else if (num % 5 % 3 == 0)
	{
		answer += (num / 5);
		answer += (num % 5) / 3;

		printf("%d\n", answer);
	}
	else
	{
			
		if ((num % 5 + 5) % 3 == 0)
		{
			answer += (num / 5 - 1);
			answer += ((num % 5 + 5) / 3);

			printf("%d\n", answer);
		}
		else if (num % 3 == 0)
		{
			answer += num / 3;
			printf("%d\n", answer);
		}
		else
			printf("-1\n");
	}*/

	for (int i = 3; i < 5001; i++)
	{
		answer = 0;
		num = i;

		printf("%d = ", i);

		if (num < 5 && num % 3 != 0)
			printf("-1\n");
		else if (num % 5 == 0)
			printf("%d\n", num / 5);
		else if ((num % 5) % 3 == 0)
		{
			answer += num / 5;
			answer += (num % 5) / 3;
			printf("%d\n", answer);
		}
		else
		{
			if ((num % 5 + 5) % 3 == 0)
			{
				answer += num / 5 - 1;
				answer += (num % 5 + 5) / 3;
				printf("%d\n", answer);
			}
			else if (num % 3 == 0)
				printf("%d\n", num / 3);
			else
				printf("-1\n");
		}

		
	}

	system("pause");
	return 0;
}