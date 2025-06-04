/* 파일명: PA6.19.c

  * 내용: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 graph 함수를 작성하시오.
          예를 들어 graph(1200, 100);은 100마다 *를 하나씩 출력하므로 *을 12개 출력하고,
          graph(1200,10);은 10마다 *을 하나씩 출력하므로 *을 120개 출력한다. 0~9999사이의
          임의의 숫자 3개를 생성하고 스케일 100으로 그래프로 출력하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  /*
   * 함수명: graph
   * 기능: 수치 데이터와 스케일을 인자로 받아 그래프를 출력하는 함수
   * 매개변수: int data - 수치 데이터, int scale - 스케일
   * 반환값: 없음
   */
void graph(int data, int scale) {
    int count = data / scale;  // 별 개수 계산

    for (int i = 0; i < count; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    int num1, num2, num3;

    srand((unsigned int)time(NULL));

    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    printf("%d: ", num1);
    graph(num1, 100);

    printf("%d: ", num2);
    graph(num2, 100);

    printf("%d: ", num3);
    graph(num3, 100);

    return 0;
}