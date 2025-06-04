/* 파일명: PA6.05.c

  * 내용: 인자로 전달받은 정수가 짝수인지 검사하는 is_even 함수와 홀수인지
          검사하는 is_odd 함수를 작성하시오. 두 함수를 이용해서 0이 입력될 때까지
          입력된 정수들에 대해서 짝수의 개수와 홀수의 개수를 구해서 출력하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  /*
   * 함수명: is_even
   * 기능: 정수가 짝수인지 검사하는 함수
   * 매개변수: int n - 검사할 정수
   * 반환값: 짝수이면 1, 아니면 0
   */
int is_even(int n) {
    return n % 2 == 0;
}

/*
 * 함수명: is_odd
 * 기능: 정수가 홀수인지 검사하는 함수
 * 매개변수: int n - 검사할 정수
 * 반환값: 홀수이면 1, 아니면 0
 */
int is_odd(int n) {
    return n % 2 != 0;
}

int main(void) {
    int num;
    int even_count = 0;
    int odd_count = 0;

    printf("정수를 빈칸으로 구분해서 입력하세요. (마지막에 0 입력)\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (is_even(num))
            even_count++;
        else
            odd_count++;
    }

    printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.\n", even_count, odd_count);

    return 0;
}