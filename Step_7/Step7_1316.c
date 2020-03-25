#include <stdio.h>
#include <Windows.h>

/*
	문제 틀림
*/
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