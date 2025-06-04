
/* ���ϸ�: PA6.09.c

  * ����: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� make_rgb
          �Լ��� �����Ͻÿ�. �տ��� ������ get_red, get_green, get_blue �Լ���
          �Բ� �̿��ؼ� �������� RGB ������ ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  /*
   * �Լ���: make_rgb
   * ���: red, green, blue�� ���ڷ� �����ؼ� RGB ���� ����� �����ϴ� �Լ�
   * �Ű�����: unsigned char r - ������, unsigned char g - �ʷϻ�, unsigned char b - �Ķ���
   * ��ȯ��: RGB ����
   */

unsigned int make_rgb(unsigned char r, unsigned char g, unsigned char b) {
    return (r << 16) | (g << 8) | b;
}

/*
 * �Լ���: get_red / get_green / get_blue
 * ���: RGB ���󿡼� ����, �ʷ�, �Ķ��� �����ϴ� �Լ�
 * �Ű�����: unsigned int rgb - RGB ����
 * ��ȯ��: �� ���� ��
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

    // ����� �Է�
    printf("RGB ����? ");
    scanf("%x", &rgb);

    // ���� �� ����
    r = get_red(rgb);
    g = get_green(rgb);
    b = get_blue(rgb);

    // ���� ���
    comp_r = 255 - r;
    comp_g = 255 - g;
    comp_b = 255 - b;

    // ���� ����
    complement = make_rgb(comp_r, comp_g, comp_b);

    // ��� ���
    printf("RGB %06X�� ����: %06X\n", rgb, complement);

    return 0;
}
