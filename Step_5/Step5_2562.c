#include <stdio.h>
#include <Windows.h>

int main() 
{
	int numbers[] = { 3,29,38,12,57,74,40,58,61 };
	int max = 0,count = 0, i;

	for (i = 0; i < sizeof(numbers)/sizeof(int); i++) {
		if (i == 0) 
			max = numbers[i];
		else if (numbers[i] > max) {
			max = numbers[i];
			count = i + 1;
		}
	}

	printf("%d\n%d\n", max,count);

	system("pause");

	return 0;
}


