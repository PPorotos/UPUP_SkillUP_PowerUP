#include <stdio.h>
#include <Windows.h>

int CountChar(char str[50]);

void Answer1152()
{
	char str[50] = "Teullinika Teullyeotzi ";

	printf("%d\n", CountChar(str));

}

int CountChar(char str[50])
{
	int i, count = 0;

	for (i = 0; str[i] != '\0'; i++)
	{
		if (i == 0 && str[i] != ' ')
			count++;
		else if (str[i - 1] == ' ')
			count++;
	}

	return count;
}