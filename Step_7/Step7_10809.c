#include <stdio.h>	

void SetChar(char* str, int* arr);


void Answer10809()
{
	char str[100] = "baekjoon";
	int alpa[25] = { 0, };
	int i;

	for (i = 0; i < 25; i++)
	{
		alpa[i] = -1;
	}
	
	SetChar(&str, &alpa);

	for (i = 0; i < 25; i++)
	{
		printf("%d ", alpa[i]);
	}

	printf("\n");
}

void SetChar(char* str, int* arr)
{
	int i;
	for (i = 0; str[i] != '\0'; i++)
	{
		int temp = (int)str[i] - (int)'a';
		if(arr[temp] == -1)
			arr[temp] = i;
	}
}