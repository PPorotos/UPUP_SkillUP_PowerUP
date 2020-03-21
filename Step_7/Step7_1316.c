#include <stdio.h>
#include <Windows.h>

/*
	입력받은 만큼 체크해서 카운트 할수있게 수정
*/
int CheckStr(char str[]);

void Answer1316()
{
	int count = 0;
	int i;
	
	count = scanf_s("%d", &count);
	char** str = (char**)malloc(sizeof(char*) * count);
	for (i = 0; i < count; i++)
	{
		str[i] = (char*)malloc(sizeof(char) * 10);
		scanf_s("%s", sizeof(10), str[i]);
	}
	for (i = 0; i < count; i++)
	{
		printf("%d\n", CheckStr(str[i]));
	}
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