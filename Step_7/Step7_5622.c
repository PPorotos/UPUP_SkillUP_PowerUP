#include <stdio.h>
#include <Windows.h>

int DialNumber(char phone[]);

void Answer5622()
{
	printf("%d\n", DialNumber("UNUCIC"));
}

int DialNumber(char phone[]) 
{
	int times[] = { 3,3,3,4,4,4,5,5,5,6,6,6,7,7,7,8,8,8,9,9,9,10,10,10,10 };
	int result = 0;
	int i;
	for (i = 0; phone[i] != '\0'; i++)
		result += times[phone[i] - 'A'];

	return result;
}