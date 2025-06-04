/*
 * 파일명: PA5.05.c

 * 내용: 온도를 입력받아 섭씨온도는 화씨온도로, 화씨온도는 섭씨온도로 변환하는 프로그램을 작성하시오.

         1) "27 C" 또는 "27 F"처럼 온도를 입력받을 때 섭씨인지 화씨인지 구분할 수 있는 문자를 함께 입력받는다
         2) 함께 입력된 문자가 'C'면 섭씨 온도이므로 화씨 온도를 구해서 출력하고,
         입력된 문자가 'F'면 화씨 온도이므로 섭씨온도를 구해서 출력한다.

 * 작성자: 한종민

 * 날짜: 2025.04.24.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_05(void);
float tempChange();

//assign_05함수 호출
int main()
{
    int T = assign_05();

    return T;
}


int assign_05(void)
{
    char x; // 입력받은 단위

    float tempin = 0.0; //입력받은 온도(숫자)
    float tempout = 0.0; //출력할 온도(숫자)

    printf("온도?(C 또는 F를 붙여주세요) ");
    scanf("%f %c", &tempin, &x);

    tempout = tempChange(x, tempin);

    if (x == 'C')
    {
        tempout = (tempin * 9.0 / 5.0) + 32.0;
        printf("%.2f C ==> %.2f F", tempin, tempout);
    }

    if (x == 'F')
    {
        tempout = (tempin - 32.0) * 5.0 / 9.0;
        printf("%.2f F ==> %.2f C", tempin, tempout);
    }
    return 0;
}


// 온도를 단위에 맞게 변환해주는 함수
float tempChange(char x, float tempin)
{
    float tempout;

    if (x == 'C')
    {
        tempout = (tempin * 5 / 9) + 32;
    }

    if (x == 'F')
    {
        tempout = (tempin - 32) * 5 / 9;
    }
    return tempout;
}