#include<stdio.h>
#include<Windows.h>

int main()
{
	char quiz[] = { 'O', 'O', 'X', 'X', 'O', 'O', 'X', 'X', 'O', 'O' };
	int scores[10] = { 0, };
	int i, count = 0;
	count = sizeof(quiz) / sizeof(char);
	for (i = 0; i < count; i++)
	{
		if (i == 0) 
		{
			if (quiz[i] == 'O')
				scores[i] = 1;
		}
		else
		{
			if (quiz[i] == 'O')
				scores[i] = scores[i - 1] + 1;
		}
	}

	int total = 0;
	for (i = 0; i < count; i++) 
	{
		total += scores[i];
	}
	
	printf("%d\n", total);

	system("pause");
	return 0;
}