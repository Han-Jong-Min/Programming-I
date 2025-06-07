/* ���ϸ�: PA10.08.c

  * ����: Ŀ�Ǽ󿡼� �ǸŵǴ� ��ǰ ������ ��Ÿ���� PRODUCT ����ü�� �����Ͻÿ�. �� 
		  ��ǰ���� ��ǰ��, ����, ��� ������ �� �־�� �Ѵ�. PRODUCT ����ü�� �Ű�������
		  ���޹޾� ��ǰ ������ ����ϴ� print_product �Լ��� �����Ͻÿ�. PRODUCT ����ü ������
		  ������ ���� ��ǰ��, ����, ��� �Է¹޾� �����ϰ� ����ϴ� ���α׷��� �ۼ��Ͻÿ�
		  ����� ��ǰ���� ��ĭ ���� �� �ܾ�� �Է��Ѵ�.

  * �ۼ���: ������

  * ��¥: 2025.06.07.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_SIZE 50

  // PRODUCT ����ü ����
typedef struct {
    char name[NAME_SIZE];  // ��ǰ��
    int price;             // ����
    int stock;             // ���
} PRODUCT;

// �Լ� ����
void print_product(PRODUCT p);
int assignment01(void);

int main() {
    return assignment01();
}

// ���� ��� �Լ�
int assignment01(void) {
    PRODUCT item;

    // �Է�
    printf("��ǰ���� �Է��ϼ��� (���� ����): ");
    scanf("%s", item.name);

    printf("������ �Է��ϼ���: ");
    scanf("%d", &item.price);

    printf("��� �Է��ϼ���: ");
    scanf("%d", &item.stock);

    // ���
    print_product(item);

    return 0;
}

// ��ǰ ���� ��� �Լ�
void print_product(PRODUCT p) {
    printf("\n[��ǰ ����]\n");
    printf("��ǰ��: %s\n", p.name);
    printf("����: %d��\n", p.price);
    printf("���: %d��\n", p.stock);
}