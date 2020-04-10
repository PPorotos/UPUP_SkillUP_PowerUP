#include <stdio.h>

int CheckStr(char str[]);

int main()
{
	int count = 0;
	int i;
	int answer = 0;

	char str[50] = { 0, };

	scanf("%d", &count);

	for (i = 0; i < count; i++)
	{
		scanf("%s", str, sizeof(str));

		answer += CheckStr(str);
	}

	printf("%d", answer);


	return 0;
}

int CheckStr(char str[])
{
	int arr[26] = { 0, };
	int i;

	for (i = 0; i < str[i + 1] != '\0'; i++)
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

