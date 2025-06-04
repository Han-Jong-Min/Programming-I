/*
 * 파일명: PA4.02.c

 * 내용: 화씨 온도를 실수로 입력받아 섭씨 온도로 변환해서 출력하는 프로그램을 작성하시오.
		 화씨 온도를 섭씨 온도로 변환하는 공식은 다음과 같다.
		 섭씨온도 = (화씨온도 - 32) * 5 / 9

 * 작성자: 한종민

 * 날짜: 2025.04.17.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double Ctemperature(double ftemp);
int assign_02(void);
// 함수의 프로토타입

int main(void)
{
	int r = assign_02();

	return r;
}

/*
 * 함수명: assign_02()
 * 기능: 화씨 온도를 입력받음, 섭씨 온도를 계산하도록 함수호출, 그 결과를 콘솔에 출력
 * 입력: 없음
 * 반환: 정수이며 0이면 성공, 그외 값은 에러이다.
 */

int assign_02(void)
{
	// 1. 화씨 온도를 입력 받아 저장
	double f = 0.0; // 화씨 온도
	printf("화씨 온도를 입력해주세요: ");
	scanf("%lf", &f);

	// 2. 화씨 온도를 섭씨로 변환
	double result = Ctemperature(f);

	// 3. 계산된 섭씨 온도를 출력
	printf("화씨 온도: %.2f F 섭씨 온도: %.2f C\n", f, result);

	return 0;
}

/*
 * 함수명: Ctemperature()
 * 기능: 화씨 온도를 입력받음, 섭씨 온도로 변환하여 반환
 * 입력: 화씨 온도
 * 반환: 섭씨 온도
 */

double Ctemperature(double ftemp)
{
	double Ctemp = 0.0;

	// 섭씨온도 = (화씨온도 - 32) * 5.0 / 9.0
	Ctemp = (ftemp - 32) * 5.0 / 9.0;

	return Ctemp;
}