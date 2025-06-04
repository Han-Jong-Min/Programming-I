/*
 * 파일명: PA4.09.c

 * 내용: 동영상의 재생시간을 초 단위로 입력받아 몇 시간 몇 분 몇 초인지 출력하는 프로그램을 작성하시오.

 * 작성자: 한종민

 * 날짜: 2025.04.17.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int playtimeH(int s);
int playtimeM(int s);
int playtimeS(int s);
int assign_09(void);
// 함수의 프로토타입

int main(void)
{
	int time = assign_09();

	return time;
}

/*
 * 함수명: assign_09()
 * 기능: 재생시간(초)을 입력받음, 시간, 분, 초를 계산하도록 함수호출, 그 결과를 콘솔에 출력
 * 입력: 없음
 * 반환: 정수이며 0이면 성공, 그외 값은 에러이다.
 */

int assign_09(void)
{
	// 1. 초 단위를 입력 받아 저장

	int sec = 0; // 초 단위
	printf("재생 시간(초)을 입력해주세요: ");
	scanf("%d", &sec);

	// 2. 시간, 분, 초로 변환
	int result_H = playtimeH(sec);
	int result_M = playtimeM(sec);
	int result_S = playtimeS(sec);

	// 3. 계산된 시간, 분, 초를 출력
	if (result_H == 0 && result_M == 0 && result_S == 0) {
		printf("재생시간은 0초입니다.\n");
	}
	else {
		printf("재생시간은 ");
		(result_H != 0) ? printf("%d시간 ", result_H) : 0;
		(result_M != 0) ? printf("%d분 ", result_M) : 0;
		(result_S != 0) ? printf("%d초", result_S) : 0;
		printf("입니다.\n");
	}

	return 0;
}

/*
 * 함수명: playtimeH(), playtimeM(), playtimeS()
 * 기능: 재생시간(초)을 입력받음, 시간/분/초를 계산하여 반환
 * 입력: 재생시간(초)
 * 반환: 시간, 분, 초
 */

int playtimeH(int s)
{
	int hour = 0; // 시간
	// 시간 = 초 / 60 / 60
	hour = (s / 60) / 60;

	return hour;
}

int playtimeM(int s)
{
	int min = 0; // 분
	// 분 = (초 / 60) % 60
	min = (s / 60) % 60;

	return min;
}

int playtimeS(int s)
{
	int sec = 0; // 초
	// 초 = 초 % 60
	sec = s % 60;

	return sec;
}