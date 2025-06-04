/* 파일명: PA6.03.c

  * 내용: 두 점 사이의 직선 거리를 구하는 distance 함수를 작성하시오.
          distance 함수를 이용해서 입력받은 시작점부터 끝점 사이의 직선 거리를
          구하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

  /*
  * 함수명: distance
  * 기능: 두 점 사이의 직선 거리를 구하는 함수
  * 매개변수: double x1, y1 - 시작점 좌표, double x2, y2 - 끝점 좌표
  * 반환값: 두 점 사이의 거리
  */
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void) {
    double x1, y1, x2, y2;

    // 사용자 입력
    printf("직선의 시작점 좌표? ");
    scanf("%lf %lf", &x1, &y1);

    printf("직선의 끝점 좌표? ");
    scanf("%lf %lf", &x2, &y2);

    // 거리 계산 및 출력
    double d = distance(x1, y1, x2, y2);
    printf("두 점 사이의 거리: %f\n", d);

    return 0;
}