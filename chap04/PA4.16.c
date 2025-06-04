/*
 * 파일명: PA4.16.c

 * 내용: 컴퓨터 시스템에서 색상을 표현하는 방법 중에 RGB 표기법은 red, greem, blue에 8비트씩을 사용해서
		 색상을 표현하므로 24비트 트루컬러라고 한다. 컴퓨터 시스템에서는 32비트 데이터의 최하위 바이트부터
		 red, green, blue 순서로 색상을 저장하고 최상위 바이트는 사용하지 않고 0으로 채운다.
		 0~255 사이의 값을 red, green, blue의 순서로 3개 입력받아서 RGB 색상을 만들어서 출력하는 프로그램을 작성하시오.
		 RGB 색상을 출력할 때는 바이트 단위로 값을 알아보기 쉽도록 16진수로 출력한다.

 * 작성자: 한종민

 * 날짜: 2025.04.17.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

unsigned int rgbtruecolor(unsigned int r, unsigned int g, unsigned int b);
int assign_16(void);
// 함수의 프로토타입

int main(void)
{
	int RGB = assign_16();

	return RGB;
}

/*
 * 함수명: assign_16()
 * 기능: red, green, blue를 입력받음, RGB 트루컬러를 계산하도록 함수호출, 그 결과를 콘솔에 출력
 * 입력: 없음
 * 반환: 정수이며 0이면 성공, 그외 값은 에러이다.
 */

int assign_16(void)
{
	unsigned int red, green, blue;

	// red, green, blue 입력 받기
	printf("red? ");
	scanf_s("%d", &red);
	printf("green? ");
	scanf_s("%d", &green);
	printf("blue? ");
	scanf_s("%d", &blue);
	if (red > 255) red = 0x0000;
	if (green > 255) green = 0x0000;
	if (blue > 255) blue = 0x0000;

	unsigned int rgb = rgbtruecolor(red, green, blue); // RGB 색상 생성

	// RGB 색상 출력
	printf("RGB 색상: %06X\n", rgb);

	return 0;
}

/*
 * 함수명: rgbtruecolor()
 * 기능: red, green, blue를 입력받음, RGB 트루컬러를 만들어 출력
 * 입력: red, green, blue를 입력
 * 반환: RGB 트루컬러
 */

unsigned int rgbtruecolor(unsigned int r, unsigned int g, unsigned int b)
{
	unsigned int rgbtrue = 0.0; // RGB 색상
	rgbtrue = r | g << 8 | b << 16;

	return rgbtrue;
}