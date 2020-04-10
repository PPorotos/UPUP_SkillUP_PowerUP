#include <stdio.h>
#include <Windows.h>

int CalMoney(int a, int b, int c);

void Answer1712()
{
	int a = 0, b = 0, c = 0;
	
	printf("a =");
	scanf_s("%d", &a);
	printf("b =");
	scanf_s("%d", &b);
	printf("c =");
	scanf_s("%d", &c);

	printf("%d", CalMoney(a, b, c));
}

int CalMoney(int a, int b, int c)
{
	int total = a;
	int totalPrice = 0;
	int count = 0;
	
	while (1)
	{
		count++;
		
		total += b;
		totalPrice += c;

		if (total < totalPrice)
			break;
	}

	return count;
}
