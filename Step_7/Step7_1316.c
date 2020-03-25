#include <stdio.h>
#include <Windows.h>

/*
	입력받은 만큼 체크해서 카운트 할수있게 수정
*/
int CheckStr(char str[]);
void SetStr(char* str, char temp[]);

void Answer1316()
{
	char** str;
	int count = 0, i, j;
	
	printf("count = ");
	scanf_s("%d", &count);
	str = (char**)malloc(sizeof(char*) * count);

	for (i = 0; i < count; i++)
		str[i] = (char*)malloc(sizeof(char) * 100);

	for (i = 0; i < count; i++)
	{ 
		char temp[100];
		printf("str[%d] = ", i);
		scanf_s("%s", temp);
		SetStr(str[i], temp);
	}
		

	for (i = 0; i < count; i++)
		printf("%d\n", CheckStr(str[i]));

	for (i = 0; i < count; i++)
		free(str[i]);
	free(str);
}

void SetStr(char* str, char temp[])
{
	int i;
	for (i = 0; temp != '\0'; i++)
		str[i] = temp[i];

	str[i] = '\0';
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