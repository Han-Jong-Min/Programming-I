
/* 파일명: PA6.09.c

  * 내용: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 make_rgb
          함수를 정의하시오. 앞에서 정의한 get_red, get_green, get_blue 함수를
          함께 이용해서 입혁받은 RGB 색상의 보색을 구해서 출력하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  /*
   * 함수명: make_rgb
   * 기능: red, green, blue를 인자로 전달해서 RGB 색을 만들어 리턴하는 함수
   * 매개변수: unsigned char r - 빨강색, unsigned char g - 초록색, unsigned char b - 파랑색
   * 반환값: RGB 색상
   */

unsigned int make_rgb(unsigned char r, unsigned char g, unsigned char b) {
    return (r << 16) | (g << 8) | b;
}

/*
 * 함수명: get_red / get_green / get_blue
 * 기능: RGB 색상에서 빨강, 초록, 파랑을 추출하는 함수
 * 매개변수: unsigned int rgb - RGB 색상
 * 반환값: 각 색상 값
 */
unsigned char get_red(unsigned int rgb) {
    return (rgb >> 16) & 0xFF;
}

unsigned char get_green(unsigned int rgb) {
    return (rgb >> 8) & 0xFF;
}

unsigned char get_blue(unsigned int rgb) {
    return rgb & 0xFF;
}

int main(void) {
    unsigned int rgb;
    unsigned char r, g, b;
    unsigned char comp_r, comp_g, comp_b;
    unsigned int complement;

    // 사용자 입력
    printf("RGB 색상? ");
    scanf("%x", &rgb);

    // 원래 색 분해
    r = get_red(rgb);
    g = get_green(rgb);
    b = get_blue(rgb);

    // 보색 계산
    comp_r = 255 - r;
    comp_g = 255 - g;
    comp_b = 255 - b;

    // 보색 조합
    complement = make_rgb(comp_r, comp_g, comp_b);

    // 결과 출력
    printf("RGB %06X의 보색: %06X\n", rgb, complement);

    return 0;
}
