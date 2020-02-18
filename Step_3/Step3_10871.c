#include <stdio.h>
#include <Windows.h>
#include <time.h>

int* RandomNumber(int* arr, int count);

void main() {

	srand(time(0));

	int N, X, i;
	int* arr;
	
	N = rand() % 11 + 1;
	X = rand() % N + 2;
	arr = (int*)malloc(sizeof(int) * N);

	for (i = 0; i < N; i++) 
	{
		arr[i] = i + 1;
	}

	arr = RandomNumber(arr, N);
	
	for (i = 0; i < N; i++) 
	{
		if (X > arr[i])
			printf("%d ", arr[i]);
	}

	printf("\n");
	system("pause");
}

int* RandomNumber(int* arr,int count) 
{
	int i, idx;

	for (i = 0; i < count; i++) 
	{
		idx = rand() % count;
		int temp = arr[i];
		arr[i] = arr[idx];
		arr[idx] = temp;
	}

	return arr;
}