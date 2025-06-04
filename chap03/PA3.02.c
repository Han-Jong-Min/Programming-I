/*
 * 파일명: PA3.02.c

 * 내용: 가로의 길이와 세로의 길이를 입력받아 직사각형의 넓이와 둘레를 구하는 프로그램을 작성하시오.

 * 작성자: 한종민

 * 날짜: 2025.04.04.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_02()
{
	int a, b;
	printf("가로의 길이 ? ");
	scanf("%d", &a);
	printf("세로의 길이 ? ");
	scanf("%d", &b);
	printf("직사각형의 넓이 : %d\n", a * b);
	printf("직사각형의 둘레 : %d\n", (a + b) * 2);
}

int main()
{
	assign_02();
	return 0;
}