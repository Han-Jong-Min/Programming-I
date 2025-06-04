/* ���ϸ�: PA6.03.c

  * ����: �� �� ������ ���� �Ÿ��� ���ϴ� distance �Լ��� �ۼ��Ͻÿ�.
          distance �Լ��� �̿��ؼ� �Է¹��� ���������� ���� ������ ���� �Ÿ���
          ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>

  /*
  * �Լ���: distance
  * ���: �� �� ������ ���� �Ÿ��� ���ϴ� �Լ�
  * �Ű�����: double x1, y1 - ������ ��ǥ, double x2, y2 - ���� ��ǥ
  * ��ȯ��: �� �� ������ �Ÿ�
  */
double distance(double x1, double y1, double x2, double y2) {
    return sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
}

int main(void) {
    double x1, y1, x2, y2;

    // ����� �Է�
    printf("������ ������ ��ǥ? ");
    scanf("%lf %lf", &x1, &y1);

    printf("������ ���� ��ǥ? ");
    scanf("%lf %lf", &x2, &y2);

    // �Ÿ� ��� �� ���
    double d = distance(x1, y1, x2, y2);
    printf("�� �� ������ �Ÿ�: %f\n", d);

    return 0;
}