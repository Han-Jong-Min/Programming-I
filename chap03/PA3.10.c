/*
 * 파일명: PA3.10.c

 * 내용: 원/달러 환율과 달러를 입력받아 몇 원인지 출력하는 프로그램을 작성하시오.

 * 작성자: 한종민

 * 날짜: 2025.04.04.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_10()
{
	float won, dollar, rate;
	printf("USD ? ");
	scanf("%f", &dollar);
	printf("원/달러 환율 ? ");
	scanf("%f", &rate);
	won = rate * dollar;
	printf("USD %.2f = KRW %.2f \n", dollar, won);
}

int main()
{
	assign_10();
	return 0;
}