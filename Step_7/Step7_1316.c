#include <stdio.h>
#include <Windows.h>

int CheckStr(char str[]);

void Answer1316()
{
	printf("%d\n", CheckStr("happya"));
}

int CheckStr(char str[])
{
	int arr[26] = { 0, };
	int i;

	for (i = 0; str[i] != '\0'; i++)
	{
		int temp = str[i] - 'a';

		if (i == 0 || arr[temp] == 0)
			arr[temp] = i;
		else if (i - arr[temp] <= 1)
			arr[temp] = i;
		else
			return 0;
	}

	return 1;
}