/* 파일명: PA10.13.c

  * 내용: 직사각형 정보를 나타내는 RECT 구조체를 정의하시오. 직사각형은 좌하단점과
		  우상단점으로 구성되며 점의 좌표는 POINT 구조체를 이용해서 나타낸다. 직사각형
		  정보를 출력하는 print_rect함수를 정의하고, RECT 구조체 변수를 선언해서 직사각형
		  정보를 입력받고 출력하는 프로그램을 작성하시오.
  
  * 작성자: 한종민

  * 날짜: 2025.06.07.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // POINT 구조체 정의
typedef struct {
    int x;
    int y;
} POINT;

// RECT 구조체 정의
typedef struct {
    POINT left_bottom;  // 좌하단 점
    POINT right_top;    // 우상단 점
} RECT;

// 함수 선언
void print_rect(RECT r);
int assignment01(void);

int main() {
    return assignment01();
}

// 직사각형 입력 및 출력 기능
int assignment01(void) {
    RECT rect;

    // 좌하단점 입력
    printf("직사각형의 좌하단점(x, y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // 우상단점 입력
    printf("직사각형의 우상단점(x, y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // 출력
    print_rect(rect);

    return 0;
}

// 직사각형 정보 출력 함수
void print_rect(RECT r) {
    printf("RECT 좌하단점: (%d, %d)\n", r.left_bottom.x, r.left_bottom.y);
    printf("RECT 우상단점: (%d, %d)\n", r.right_top.x, r.right_top.y);
}

