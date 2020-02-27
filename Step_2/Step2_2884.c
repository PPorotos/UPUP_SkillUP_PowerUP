//#include<stdio.h>
//#include<Windows.h>
//
//int InputHour();
//int InputMin();
//void GetTime(int hour, int min);
//
//void main() 
//{
//	int hour = 0, min = 0;
//
//	hour = InputHour();
//	min = InputMin();
//
//	GetTime(hour, min);
//}
//
//int InputHour() {
//	int hour = 0;
//
//	do {
//		scanf_s("%d", &hour);
//	} while (hour < 0 && hour > 23);
//
//	return hour;
//}
//
//int InputMin() {
//
//	int min;
//
//	do {
//		scanf_s("%d", &min);
//	} while (min < 0 && min > 59);
//
//	return min;
//}
//
//void GetTime(int hour, int min) 
//{
//	int answerHour = 0;
//	int answerMin = 0;
//	
//	if (min < 45)
//		answerHour = hour - 1;
//
//	answerMin = 60 - 45 + min;
//
//	printf("%d %d\n", answerHour, answerMin);
//}