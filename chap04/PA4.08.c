/*
 * 파일명: PA4.08.c

 * 내용: 반지름의 길이를 입력받아 구의 부피를 구하는 프로그램을 작성하시오. 이때 파이는 3.141592라고 하자.

 * 작성자: 한종민

 * 날짜: 2025.04.17.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

double volume(double r);
int assign_08(void);
// 함수의 프로토타입

int main(void)
{
	int V = assign_08();

	return V;
}

/*
 * 함수명: assign_08()
 * 기능: 반지름 길이를 입력받음, 부피를 계산하도록 함수호출, 그 결과를 콘솔에 출력
 * 입력: 없음
 * 반환: 정수이며 0이면 성공, 그외 값은 에러이다.
 */

int assign_08(void)
{
	// 1. 반지름 길이를 입력 받아 저장
	double radius = 0.0; // 반지름 길이
	printf("반지름의 길이를 입력해주세요: ");
	scanf("%lf", &radius);

	// 2. 구의 부피를 계산
	double result = volume(radius);

	// 3. 계산된 구의 부피를 출력
	printf("반지름의 길이? %.2f \n구의 부피: %f\n", radius, result);

	return 0;
}

/*
 * 함수명: volume()
 * 기능: 반지름을 입력받음, 구의 부피를 계산하여 반환
 * 입력: 반지름 길이
 * 반환: 구의 부피
 */

double volume(double r)
{
	double vol = 0.0;
	double pi = 3.141592; // 파이
	// 구의 부피 = (4/3) * pi * 반지름^3
	vol = (4.0 / 3.0) * pi * pow(r, 3);

	return vol;
}