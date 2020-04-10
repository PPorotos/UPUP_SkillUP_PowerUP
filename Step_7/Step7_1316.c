#include <stdio.h>
#include <Windows.h>

int CheckStr(char str[]);

void Answer1316()
{
	char** str;
	int count = 0, i, j;
	int answer = 0;

	printf("count = ");
	scanf_s("%d", &count);
	str = (char**)malloc(sizeof(char*) * count);

	for (i = 0; i < count; i++)
		str[i] = (char*)malloc(sizeof(char) * 100);

	for (i = 0; i < count; i++)
	{
		char temp[50];
		scanf_s("%s", str[i], sizeof(str[i]));
	}

	for (i = 0; i < count; i++)
		answer += CheckStr(str[i]);

	printf("%d \n", answer);

	for (i = 0; i < count; i++)
		free(str[i]);
	free(str);
}

int CheckStr(char str[])
{
	int arr[26] = { 0, };
	int i;

	for (i = 0; i < strlen(str) - 1; i++)
	{
		if (str[i] != str[i + 1])
		{
			if (arr[str[i + 1] - 'a'] != 0)
				return 0;
			else
				arr[str[i] - 'a'] = 1;
		}
	}

	return 1;
}