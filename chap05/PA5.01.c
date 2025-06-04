/*
 * 파일명: PA5.01.c

 * 내용: 점의 좌표 (x, y)를 입력받아 스크린 상의 선택 영역 내의 점인지 검사하는 프로그램을 작성하시오.
		 스크린 상의 선택 영역은 직사각형 모양의 영역으로 직사각형의 좌상단점과 우하단점에 의해서 결정된다.

 * 작성자: 한종민

 * 날짜: 2025.04.24.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_01(void);
int Coordinate(int l, int t, int r, int b);

int main() {
	int xy = assign_01();

	return xy;
}

int assign_01(void)
{
	int left;
	int top;
	int right;
	int bottom;
	printf("선택 영역의 좌상단점 (left, top)? ");
	scanf("%d %d", &left, &top);
	printf("선택 영역의 우하단점 (right, bottom)? ");
	scanf("%d %d", &right, &bottom);



	Coordinate(left, top, right, bottom);
}

int Coordinate(int l, int t, int r, int b)
{
	int x;
	int y;
	printf("점의 좌표 (x, y)? ");
	scanf("%d %d", &x, &y);

	if (x >= l && x <= r && y >= t && y <= b) {
		printf("직사각형 모양의 선택 영역 내의 점입니다.\n");
	}
	else {
		printf("선택 영역 외의 점입니다.\n");
	}
	return 0;
}