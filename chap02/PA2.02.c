/* 파일명: PA2.02.c

  * 내용: PA02. 학생의 번호와 학점을 입력받아 출력하는 프로그램을 작성하시오.
		 학생의 번호는 정수로, 학점은 실수로 입력받는다.

  * 작성자: 한종민

  * 날짜: 2025.3.31

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int num;
	double score;
	printf("번호? ");
	scanf("%d", &num);
	printf("학점? ");
	scanf("%lf", &score);
	printf("%d번 학생의 학점은 %.6lf입니다.\n", num, score);

	return 0;
}