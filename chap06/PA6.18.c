/* ���ϸ�: PA6.18.c

  * ����: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� divisors �Լ��� �ۼ��Ͻÿ�.
          0~999������ ������ ���� 3���� �����ϰ� divisors �Լ��� �̿��ؼ� ������
          ����� ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

  /*
   * �Լ���: divisors
   * ���: ���ڷ� ���޵� ������ ����� ���ؼ� ����ϴ� �Լ�
   * �Ű�����: int n - ����� ���� ����
   * ��ȯ��: ����
   */
void divisors(int n) {
    int count = 0;

    printf("%d�� ���: ", n);
    for (int i = 1; i <= n; i++) {
        if (n % i == 0) {
            printf("%d ", i);
            count++;
        }
    }
    printf("=> �� %d��\n", count);
}

int main(void) {
    int n1, n2, n3;

    // ���� �ʱ�ȭ
    srand((unsigned int)time(NULL));

    // 0~999 ������ ���� ����
    n1 = rand() % 1000;
    n2 = rand() % 1000;
    n3 = rand() % 1000;

    // ��� ���
    divisors(n1);
    divisors(n2);
    divisors(n3);

    return 0;
}