/*
 * 파일명: PA5.03.c

 * 내용: 거스름돈을 입력받아 50000원, 10000원, 5000원, 1000원, 100원, 10원짜리가
         각각 몇 개 필요한지 구해서 출력하시오. 십원 미만 단위는 절사한다.

 * 작성자: 한종민

 * 날짜: 2025.04.23.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_03(void);
int MoneyChange();

int main() {
    int M = assign_03();

    return M;
}

int assign_03(void)
{
    int money;
    int count;
    printf("거스름돈을 입력하세요: ");
    scanf("%d", &money);

    MoneyChange(money);
}

int MoneyChange(int don)
{
    int chan = 0;
    int count;
    chan = don - (don % 10);
    printf("거스름돈 (10원미만 절사): %d\n", chan);

    if (don >= 50000) {
        count = don / 50000;
        printf("50000원: %d장\n", count);
        don %= 50000;
    }

    if (don >= 10000) {
        count = don / 10000;
        printf("10000원: %d장\n", count);
        don %= 10000;
    }

    if (don >= 5000) {
        count = don / 5000;
        printf("5000원: %d장\n", count);
        don %= 5000;
    }

    if (don >= 1000) {
        count = don / 1000;
        printf("1000원: %d장\n", count);
        don %= 1000;
    }

    if (don >= 100) {
        count = don / 100;
        printf("100원: %d개\n", count);
        don %= 100;
    }

    if (don >= 10) {
        count = don / 10;
        printf("10원: %d개\n", count);
        don %= 10;
    }

    return 0;
}