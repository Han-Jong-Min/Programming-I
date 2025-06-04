/* ���ϸ�: PA6.19.c

  * ����: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� graph �Լ��� �ۼ��Ͻÿ�.
          ���� ��� graph(1200, 100);�� 100���� *�� �ϳ��� ����ϹǷ� *�� 12�� ����ϰ�,
          graph(1200,10);�� 10���� *�� �ϳ��� ����ϹǷ� *�� 120�� ����Ѵ�. 0~9999������
          ������ ���� 3���� �����ϰ� ������ 100���� �׷����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  /*
   * �Լ���: graph
   * ���: ��ġ �����Ϳ� �������� ���ڷ� �޾� �׷����� ����ϴ� �Լ�
   * �Ű�����: int data - ��ġ ������, int scale - ������
   * ��ȯ��: ����
   */
void graph(int data, int scale) {
    int count = data / scale;  // �� ���� ���

    for (int i = 0; i < count; i++) {
        printf("*");
    }
    printf("\n");
}

int main(void) {
    int num1, num2, num3;

    srand((unsigned int)time(NULL));

    num1 = rand() % 10000;
    num2 = rand() % 10000;
    num3 = rand() % 10000;

    printf("%d: ", num1);
    graph(num1, 100);

    printf("%d: ", num2);
    graph(num2, 100);

    printf("%d: ", num3);
    graph(num3, 100);

    return 0;
}