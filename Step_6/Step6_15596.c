//#include <stdio.h>
//#include <Windows.h>
//#include <time.h>
//
//void SetNum(int* number, int size);
//int Sum(int* number, int size);
//
//int main()
//{
//	srand(time(0));
//
//	int* numbers;
//	int count = 0;
//
//	count = rand() % 3000000 + 1; 
//	numbers = (int*)malloc(sizeof(int) * count);
//	SetNum(numbers, count);
//
//	printf("%d\n", Sum(numbers, count));
//
//	system("pause");
//	return 0;
//}
//
//void SetNum(int* number, int size) 
//{
//	int i;
//	for (i = 0; i < size; i++)
//	{
//		number[i] = rand() % 1000001;
//	}
//}
//
//int Sum(int* number, int size) 
//{
//	int i, total = 0;
//	for (i = 0; i < size; i++)
//	{
//		total += number[i];
//	}
//	return total;
//}