/* ���ϸ�: PA6.01.c

  * ����: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ�
          get_perimeter �Լ��� �ۼ��Ͻÿ�. get_perimeter �Լ��� �̿��ؼ�
          �Է¹��� ����, ������ ���̷� ���簢���� �ѷ��� ���ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  // �Լ� ����
int get_perimeter(int width, int height);

int main(void) {
    int width, height;

    // ����ڷκ��� ���ο� ���� �Է� �ޱ�
    printf("����? ");
    scanf("%d", &width);

    printf("����? ");
    scanf("%d", &height);

    // �Լ� ȣ���Ͽ� �ѷ� ���
    int perimeter = get_perimeter(width, height);

    // ��� ���
    printf("���簢���� �ѷ�: %d\n", perimeter);

    return 0;
}

/*
  * �Լ���: get_perimeter
  * ���: ���ο� ������ ���̸� �Ű������� ���޹޾� ���簢���� �ѷ��� ���ϴ� �Լ�
  * �Ű�����: int width - ���� ����, int height - ���� ����
  * ��ȯ��: ���簢���� �ѷ�
*/
int get_perimeter(int width, int height) {
    return 2 * (width + height);
}