/*
 * 파일명: PA3.06.c

 * 내용: 아파트의 면적을 제곱미터로 입력받아 몇 평인지 출력하는 프로그램을 작성하시오.
		 1제곱미터는은 0.3025 평에 해당한다. 프로그램을 작성할 때 이름 있는 상수를 이용해보자.

 * 작성자: 한종민

 * 날짜: 2025.04.04.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void assign_06()
{
	float area;
	const float p = 0.3025f;
	printf("아파트의 면적(제곱미터) ? ");
	scanf("%f", &area);
	printf("%.2f 제곱미터 = %.2f 평\n", area, area * p);
}

int main()
{
	assign_06();
	return 0;
}