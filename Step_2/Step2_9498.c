//#include <stdio.h>	
//#include <Windows.h>
//
//int InputNum();
//char CheckScore(int score);
//
//void main() {
//
//	int score = 0;
//	printf("���� ������ �Է��ϼ��� : \n");
//
//	score = InputNum();
//
//	printf("���� : %c\n", CheckScore(score));
//}
//
//int InputNum() {
//
//	int tempScore;
//
//	do {
//		tempScore = scanf_s("%d", &tempScore);
//	} while (tempScore < 0 && tempScore > 100);
//
//	return tempScore;
//}
//
//char CheckScore(int score) 
//{
//	if (score <= 59)
//		return 'F';
//	else if (score <= 69)
//		return 'D';
//	else if (score <= 79)
//		return 'C';
//	else if (score <= 89)
//		return 'B';
//	else
//		return 'A';
//}