/*
 * 파일명: PA3.04.c

 * 내용: 물체의 작용한 힘의 크기와 힘의 방향으로 이동한 거리를 입력받아 한 일의 양을 구하는 프로그램을 작성하시오.
		 힘의 크기는 N 단위로 입력받고, 힘의 방향으로 이동한 거리는 m 단위로 입력받는다.

 * 작성자: 한종민

 * 날짜: 2025.04.04.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_04()
{
	float power, m;
	printf("힘(N) ? ");
	scanf("%f", &power);
	printf("이동 거리(m) ? ");
	scanf("%f", &m);
	printf("일의 양 : %.2f J\n", power * m);
}

int main()
{
	assign_04();
	return 0;
}