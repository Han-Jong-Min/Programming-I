/* ���ϸ�: PA6.05.c

  * ����: ���ڷ� ���޹��� ������ ¦������ �˻��ϴ� is_even �Լ��� Ȧ������
          �˻��ϴ� is_odd �Լ��� �ۼ��Ͻÿ�. �� �Լ��� �̿��ؼ� 0�� �Էµ� ������
          �Էµ� �����鿡 ���ؼ� ¦���� ������ Ȧ���� ������ ���ؼ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  /*
   * �Լ���: is_even
   * ���: ������ ¦������ �˻��ϴ� �Լ�
   * �Ű�����: int n - �˻��� ����
   * ��ȯ��: ¦���̸� 1, �ƴϸ� 0
   */
int is_even(int n) {
    return n % 2 == 0;
}

/*
 * �Լ���: is_odd
 * ���: ������ Ȧ������ �˻��ϴ� �Լ�
 * �Ű�����: int n - �˻��� ����
 * ��ȯ��: Ȧ���̸� 1, �ƴϸ� 0
 */
int is_odd(int n) {
    return n % 2 != 0;
}

int main(void) {
    int num;
    int even_count = 0;
    int odd_count = 0;

    printf("������ ��ĭ���� �����ؼ� �Է��ϼ���. (�������� 0 �Է�)\n");

    while (1) {
        scanf("%d", &num);

        if (num == 0)
            break;

        if (is_even(num))
            even_count++;
        else
            odd_count++;
    }

    printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.\n", even_count, odd_count);

    return 0;
}