#include <stdio.h>
#include <Windows.h>

int GetInt(char cha);
void Answer11654();

void Answer11654()
{
	printf("%d\n", GetInt('c'));
}

int GetInt(char cha)
{
	return (int)cha;
}