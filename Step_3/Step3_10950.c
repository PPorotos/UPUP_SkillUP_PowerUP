//#include <stdio.h>
//#include <Windows.h>
//
//// 문제 15552번도 동일
//
//int InputNum();
//int CheckNum(int number);
//int PlusNum(int num1, int num2);
//
//void main() {
//	
//	int count = 0, i; 
//	scanf_s("%d", &count);
//
//	for(i = 0; i< count; i++)
//		InputNum();
//}
//
//int InputNum() {
//
//	int num1, num2;
//
//	while (1) 
//	{
//		if (CheckNum(num1) == 1 && CheckNum(num2) == 1)
//			break;
//
//		scanf_s("%d %d", num1, num2);
//	}
//
//	printf("%d\n", PlusNum(num1, num2));
//}
//
//int CheckNum(int number) {
//
//	if (number >= 0 && number <= 10)
//		return 1;
//	else
//		return 0;
//
//}
//
//int PlusNum(int num1, int num2) {
//
//	return num1 + num2;
//}