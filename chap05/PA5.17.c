/*
 * 파일명: PA5.17.c

 * 내용: 주차 시간을 분으로 입력받아서 주차 요금을 계산해서 출력하는 프로그램을 작성하시오.
		 주차 요금은 최초 30분은 2000원, 그 이후는 10분당 1000원씩으로 계산하며, 하루 최대 25000원을
		 넘을 수 없다. 주차 시간은 24시간을 넘을 수 없다고 가정한다.

 * 작성자: 한종민

 * 날짜: 2025.04.24.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_17(void);
int Parking();

int main() {
	int P = assign_17();

	return P;
}

int assign_17(void)
{
	int time;
	printf("주차 시간(분)? ");
	scanf("%d", &time);

	if (time > 1440) {
		printf("주차 시간은 24시간을 초과할 수 없습니다.\n");
		return -1;  // 비정상 종료
	}
	// 주차 요금 계산 함수 호출
	Parking(time);
}

int Parking(int t)
{
	int fee = 0;
	int day = 0;
	// 주차 요금 계산
	if (t <= 30) {
		fee = 2000;
	}
	else {
		t -= 30;
		fee = 2000 + (t / 10) * 1000;
	}
	if (fee > 25000) {
		fee = 25000;
	}
	printf("주차 요금: %d원\n", fee);

	return 0;
}