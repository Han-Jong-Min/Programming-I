/*
 * 파일명: PA4.15.c

 * 내용: 우리가 알고 있는 환율은 매매기준율이다. 실제 달러를 구입할 때는 매매기준율에 은행의 환전 수수료를 더해서
		 환율이 결정된다. 환전수수료는 환전우대율에 따라 달라진다. 환전수수료율은 은행마다 미리 정해지며, 환전우대율은
		 고객마다 다르게 책정된다. 환전수수료율은 1.75%로 정해져 있다고 가정하고 원-달러 매매기준율과 환전우대율(%)을
		 입력받아 달러를 살 때 적용되는 환율을 결정하고, 구입하고자 하는 달러가 얼마인지 입력받아서 몇 원에 해당하는지
		 출력하는 프로그램을 작성하시오.

 * 작성자: 한종민

 * 날짜: 2025.04.17.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

double applied_r(double std_rate, double pre_rate);
double assign_15(void);
// 함수의 프로토타입

int main(void)
{
	int money = assign_15();

	return money;
}

/*
 * 함수명: assign_15()
 * 기능: 원/달러 매매기준율, 환율우대율, 구매할 달러를 입력받음, 최종 환율을 계산하도록 함수호출, 그 결과를 콘솔에 출력
		 최종 환율로 달러를 원화로 변환
 * 입력: 없음
 * 반환: 정수이며 0이면 성공, 그외 값은 에러이다.
 */

double assign_15(void)
{
	int standard_rate = 0;    // 원/달러 매매기준율
	int preferential_rate = 0;       // 환율우대율
	double buy_usd = 0;     // 구매할 달러(USD)


	// 사용자 입력 받기
	printf("원/달러 매매기준율 ? ");
	scanf("%d", &standard_rate);

	printf("환율우대율(0~100%%) ? ");
	scanf("%d", &preferential_rate);

	double applied_rate = applied_r(standard_rate, preferential_rate); // 최종 환율

	printf("달러 살 때 환율은 %f입니다.\n", applied_rate);

	printf("구입할 달러(USD) ? ");
	scanf("%lf", &buy_usd);

	printf("USD %.2f 살 때 ==> KRW %.2f\n", buy_usd, applied_rate * buy_usd);

	return 0;
}

/*
 * 함수명: applied_r()
 * 기능: 매매기준율과 환율우대율을 입력받음, 최종 환율을 계산하여 반환
 * 입력: 매매기준율과 환율우대율
 * 반환: 최종 환율
 */

double applied_r(double std_rate, double pre_rate)
{
	double applied_rate = 0.0; // 최종 환율
	applied_rate = std_rate + (std_rate * 0.0175 * (1 - pre_rate / 100));

	return applied_rate;
}