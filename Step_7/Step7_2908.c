#include<stdio.h>
#include<Windows.h>

void ChangeStr(char number[]);
void CheckValue(char number1[], char number2[]);

void Answer2908()
{
	char number1[3] = "654";
	char number2[3] = "341";

	char* changeNum1;
	char* changeNum2;

	changeNum1 = (char*)malloc(sizeof(char) * 3);
	changeNum2 = (char*)malloc(sizeof(char) * 3);

	ChangeStr(number1, changeNum1);
	ChangeStr(number2, changeNum2);

	CheckValue(changeNum1, changeNum2);
}

void ChangeStr(char number[], char* changeNum)
{
	int i, index = 2;

	for (i = 0; i < 3; i++)
	{
		changeNum[i] = number[index];
		index--;
	}
	changeNum[i] = '\0';
}

void CheckValue(char number1[], char number2[])
{
	int i;

	for (i = 0; i <strlen(number1); i++)
	{
		if (number1[i] > number2[i])
		{
			printf("%s\n", number1);
			break;
		}
		else if (number1[i] < number2[i])
		{
			printf("%s\n", number2);
			break;
		}
	}

}

