/* ���ϸ�: PA6.06.c

  * ����: ������ ���� �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ�
          choose_menu �Լ��� �ۼ��Ͻÿ�. �߸��� ��ȣ�� �����ϸ� �ùٸ� ��ȣ��
          ������ ������ ��� �޴��� ����ϰ� �ٽ� ���ù޾ƾ��Ѵ�. �� choose_menu
          �Լ��� �ݵ�� 0~3������ ���� �����ؾ� �Ѵ�. choose_menu�� ���ϰ��� ����
          � �޴��� ���õǾ����� ������ ����ϴ� ���α׷��� �ۼ��Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.05.20.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  /*
   * �Լ���: choose_menu
   * ���: �޴��� ����ϰ� ���õ� �޴� �׸��� ��ȣ�� �����ϴ� �Լ�
   * ��ȯ��: 0~3 ������ ����
   */
int choose_menu(void) {
    int choice;

    while (1) {
        printf("[1. ���� ����  2. ���� ����  3. �μ�  0. ����] ����? ");
        scanf("%d", &choice);

        if (choice >= 0 && choice <= 3)
            return choice;  // ��ȿ�� ����
        // �߸��� �Է��̸� �ٽ� �ݺ�
    }
}

int main(void) {
    int menu;

    while (1) {
        menu = choose_menu();

        if (menu == 0)
            break;

        switch (menu) {
        case 1:
            printf("���� ���⸦ �����մϴ�.\n");
            break;
        case 2:
            printf("���� ������ �����մϴ�.\n");
            break;
        case 3:
            printf("�μ⸦ �����մϴ�.\n");
            break;
        }
    }

    return 0;
}