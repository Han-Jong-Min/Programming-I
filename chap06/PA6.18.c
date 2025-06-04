/* 파일명: PA6.18.c

  * 내용: 인자로 전달된 정수의 약수를 구해서 출력하는 divisors 함수를 작성하시오.
          0~999사이의 임의의 정수 3개를 생성하고 divisors 함수를 이용해서 각각의
          약수를 출력하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  /*
   * 함수명: divisors
   * 기능: 인자로 전달된 정수의 약수를 구해서 출력하는 함수
   * 매개변수: int n - 약수를 구할 정수
   * 반환값: 없음
   */
void divisors(int n) {
    int count = 0;

    printf("%d의 약수: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("=> 총 %d개\n", count);
}

int main(void) {
    int n1, n2, n3;

    // 난수 초기화
    srand((unsigned int)time(NULL));

    // 0~999 사이의 정수 생성
    n1 = rand() % 1000;
    n2 = rand() % 1000;
    n3 = rand() % 1000;

    // 약수 출력
    divisors(n1);
    divisors(n2);
    divisors(n3);

    return 0;
}