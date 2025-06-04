/*
 * 파일명: PA5.04.c

 * 내용: 연도를 입력받아 윤년인지 검사하는 프로그램을 작성하시오.
		 윤년이 되는 조건은 다음과 같다.
		 - 4로 나누어 떨어지는 해는 윤년이다.
		 - 4로 나누어 떨어지는 해 중에서 100으로 나누어 떨어지는 해는 윤년이 아니다.
		 - 100으로 나누어 떨어지는 해 중에서 400으로 나누어 떨어지는 해는 윤년이다.

 * 작성자: 한종민

 * 날짜: 2025.04.24.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_04(void);
int Year();

int main() {
	int Y = assign_04();

	return Y;
}

int assign_04(void)
{
	int year;
	printf("연도? ");
	scanf("%d", &year);

	Year(year);
}

int Year(int y)
{
	if (y % 4 == 0) {
		if (y % 100 == 0) {
			if (y % 400 == 0) {
				printf("%d년은 윤년입니다.\n", y);
			}
			else {
				printf("%d년은 윤년이 아닙니다.\n", y);
			}
		}
		else {
			printf("%d년은 윤년입니다.\n", y);
		}
	}
	else {
		printf("%d년은 윤년이 아닙니다.\n", y);
	}
	return 0;
}