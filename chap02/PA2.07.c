/* 파일명: PA2.07.c

  * 내용: PA07. 커피 사이즈(S, T, G)와 주문 수량을 입력받아서 출력하는 프로그램을 작성하시오.
		 커피 사이즈는 S, T, G 세 가지 문자 중 하나로 입력받는다.

  * 작성자: 한종민

  * 날짜: 2025.3.31

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char size[10];
	int count;
	printf("커피 사이즈(S,T,G)와 주문 수량? ");
	scanf("%s %d", size, &count);
	printf("%s 사이즈 %d잔을 주문합니다.\n", size, count);

	return 0;
}