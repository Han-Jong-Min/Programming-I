/*
 * 파일명: PA3.03.c

 * 내용: 질량과 높이를 입력받아 위치에너지를 구하는 프로그램을 작성하시오.
		 질량은 kg 단위로 입력받고, 높이는 m 단위로 입력받는다.

 * 작성자: 한종민

 * 날짜: 2025.04.04.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_03()
{
	float m, kg;
	printf("질량(kg) ? ");
	scanf("%f", &kg);
	printf("높이(m) ? ");
	scanf("%f", &m);
	printf("위치에너지 : %f J\n", kg * 9.8 * m);
}

int main()
{
	assign_03();
	return 0;
}