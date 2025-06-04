/*
 * 파일명: PA4.17.c

 * 내용: 32비트 크기의 데이터(부호 없는 정수형)에는 0~31번 비트가 존재한다.
		 7번째 비트만 1인 값, 15번째 비트만 1인 값, 23번째 비트만 1인 값, 31번째 비트만
		 1인 값을 구해서 16진수와 10진수로 출력하는 프로그램을 작성하시오.

 * 작성자: 한종민

 * 날짜: 2025.04.17.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_17(void);
// 함수의 프로토타입

int main(void)
{
	int a = assign_17();

	return a;
}

/*
 * 함수명: assign_17()
 * 기능: 7, 15, 23, 31 비트만 1인 값을 계산, 16진수와 10진수로 출력
 * 입력: 없음
 * 반환: 정수이며 0이면 성공, 그외 값은 에러이다.
 */

int assign_17(void)
{
	// 1. 7, 15, 23, 31 비트만 1인 값 계산
	int seven = 0x80;
	int fifteen = 0x8000;
	int twentythree = 0x800000;
	int thirtyone = 0x80000000;

	// 2. 16진수와 10진수로 출력
	printf("7번째 비트만 1인 값 : %08x %d\n", seven, seven);
	printf("15번째 비트만 1인 값 : %08x %d\n", fifteen, fifteen);
	printf("23번째 비트만 1인 값 : %08x %d\n", twentythree, twentythree);
	printf("31번째 비트만 1인 값 : %08x %d\n", thirtyone, thirtyone);

	return 0;
}