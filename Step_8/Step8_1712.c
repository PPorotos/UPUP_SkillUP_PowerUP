#include <stdio.h>

int main1712()
{
	int a = 0, b = 0, c = 0;
	
	scanf_s("%d", &a);
	scanf_s("%d", &b);
	scanf_s("%d", &c);

	if (b >= c)
		printf("-1\n");
	else
		printf("%d\n", a / (c - b) + 1);


	return 0;
}
