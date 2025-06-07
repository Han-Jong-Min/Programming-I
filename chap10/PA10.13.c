/* ���ϸ�: PA10.13.c

  * ����: ���簢�� ������ ��Ÿ���� RECT ����ü�� �����Ͻÿ�. ���簢���� ���ϴ�����
		  ���������� �����Ǹ� ���� ��ǥ�� POINT ����ü�� �̿��ؼ� ��Ÿ����. ���簢��
		  ������ ����ϴ� print_rect�Լ��� �����ϰ�, RECT ����ü ������ �����ؼ� ���簢��
		  ������ �Է¹ް� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.
  
  * �ۼ���: ������

  * ��¥: 2025.06.07.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // POINT ����ü ����
typedef struct {
    int x;
    int y;
} POINT;

// RECT ����ü ����
typedef struct {
    POINT left_bottom;  // ���ϴ� ��
    POINT right_top;    // ���� ��
} RECT;

// �Լ� ����
void print_rect(RECT r);
int assignment01(void);

int main() {
    return assignment01();
}

// ���簢�� �Է� �� ��� ���
int assignment01(void) {
    RECT rect;

    // ���ϴ��� �Է�
    printf("���簢���� ���ϴ���(x, y)? ");
    scanf("%d %d", &rect.left_bottom.x, &rect.left_bottom.y);

    // ������ �Է�
    printf("���簢���� ������(x, y)? ");
    scanf("%d %d", &rect.right_top.x, &rect.right_top.y);

    // ���
    print_rect(rect);

    return 0;
}

// ���簢�� ���� ��� �Լ�
void print_rect(RECT r) {
    printf("RECT ���ϴ���: (%d, %d)\n", r.left_bottom.x, r.left_bottom.y);
    printf("RECT ������: (%d, %d)\n", r.right_top.x, r.right_top.y);
}

