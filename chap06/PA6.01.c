/* 파일명: PA6.01.c

  * 내용: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는
          get_perimeter 함수를 작성하시오. get_perimeter 함수를 이용해서
          입력받은 가로, 세로의 길이로 직사각형의 둘레를 구하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // 함수 선언
int get_perimeter(int width, int height);

int main(void) {
    int width, height;

    // 사용자로부터 가로와 세로 입력 받기
    printf("가로? ");
    scanf("%d", &width);

    printf("세로? ");
    scanf("%d", &height);

    // 함수 호출하여 둘레 계산
    int perimeter = get_perimeter(width, height);

    // 결과 출력
    printf("직사각형의 둘레: %d\n", perimeter);

    return 0;
}

/*
  * 함수명: get_perimeter
  * 기능: 가로와 세로의 길이를 매개변수로 전달받아 직사각형의 둘레를 구하는 함수
  * 매개변수: int width - 가로 길이, int height - 세로 길이
  * 반환값: 직사각형의 둘레
*/
int get_perimeter(int width, int height) {
    return 2 * (width + height);
}