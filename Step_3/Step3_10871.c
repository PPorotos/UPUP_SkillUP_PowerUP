#include <stdio.h>
#include <Windows.h>
#include <time.h>

void main() {

	srand(time(0));

	int N, X, i;
	int* arr;
	
	N = rand() % 11;
	X = rand() % 11;

	arr = (int*)malloc(sizeof(int) * N);


}