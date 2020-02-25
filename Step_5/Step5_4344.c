#include<stdio.h>
#include<Windows.h>

int main()
{
	int scores[6] = { 5, 50,50,70,80,100 };

	int i;

	int total = 0;
	float aver = 0;
	for (i = 1; i < 6; i++) {
		total += scores[i];
	}
	aver = total / (float)scores[0];

	int count = 0;

	for(i = 1; i<6; i++)
	{
		if (aver < scores[i])
			count++;
	}
	aver = count / (float)scores[0] * 100;

	printf("%.3f\n", aver);

	system("pause");
	return 0;
}