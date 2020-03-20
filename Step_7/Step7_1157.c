#include <stdio.h>
#include <Windows.h>

int CountStr(char str[]);

void Answer1157()
{
	int answer = CountStr("Mississipi");

	if (answer == -1)
		printf("?\n");
	else
		printf("%d\n", answer);
}

int CountStr(char str[])
{
	int counts[26] = { 0, };

	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		if (str[i] >= 'a' && str[i] <= 'z')
			counts[(str[i] - 'a')]++;
		else
			counts[(str[i] - 'A')]++;
	}

	int max = 0, temp = 0;

	for (i = 0; i < 26; i++)
	{
		if (counts[i] == max)
			temp++;
		else if (counts[i] > max)
		{
			temp = 0;
			max = counts[i];
		}
	}

	if (temp >= 1)
		return -1;

	return max;

}