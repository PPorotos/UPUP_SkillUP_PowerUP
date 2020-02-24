//#include<stdio.h>
//#include<Windows.h>
//
//int main() 
//{
//	int check[10] = { -1, };
//	int number[] = { 39,40,41,42,43,44,82,83,84,85 };
//	int i, j;
//	int count = sizeof(number) / sizeof(int);
//
//	for (i = 0; i < 10; i++) 
//	{
//		number[i] = number[i] % 42;
//	}
//
//	for (i = 0; i < count; i++) {
//		if (check[i] != -1) 
//		{
//			for (j = i; j < count; j++)
//			{
//				if (number[i] == number[j])
//					check[j] = i;
//			}
//		}
//	}
//
//	int max = 0;
//	for (i = 0; i < count; i++) 
//	{
//		if (max < check[i])
//			max = check[i];
//	}
//
//	printf("%d\n", max + 1);
//
//	system("pause");
//
//	return 0;
//}