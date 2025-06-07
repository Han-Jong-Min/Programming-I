
/* ���ϸ�: PA10.01.c

  * ����: ���ͳ� ����Ʈ�� �α����� �� ���Ǵ� ���̵�� �н����带 �����ϱ� ����
		  LOGIN ����ü�� �����Ͻÿ�. ���̵�� �н������ ���� �ִ� 20���ڱ��� �Է��� �� �ִ�.
		  LOGIN ����ü ������ ������ ���� ���̵�� �н����带 �Է¹޾� �����ϰ� ����ϴ� ���α׷���
		  �ۼ��Ͻÿ�. �н����带 ����� ���� �н������� ������ ������ �ʵ��� �н����� ���� ����ŭ *��
		  ��� ����Ͻÿ�.

  * �ۼ���: ������

  * ��¥: 2025.06.07.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ID_SIZE 21
#define PW_SIZE 21

  // LOGIN ����ü ����
typedef struct {
    char id[ID_SIZE];
    char password[PW_SIZE];
} LOGIN;

// �Լ� ����
int assignment01(void);
void inputLogin(LOGIN* user);
void printLogin(const LOGIN* user);

int main() {
    return assignment01();
}

// ���� ��� �Լ�
int assignment01(void) {
    LOGIN user;

    inputLogin(&user);
    printLogin(&user);

    return 0;
}

// ����ڷκ��� ���̵�� �н����� �Է� �ޱ�
void inputLogin(LOGIN* user) {
    printf("���̵�: ");
    scanf("%20s", user->id);

    printf("�н�����: ");
    scanf("%20s", user->password);
}

// ���̵�� �״��, �н������ *�� ���
void printLogin(const LOGIN* user) {
    printf("\n[�α��� ���� ���]\n");
    printf("���̵�: %s\n", user->id);

    printf("�н�����: ");
    for (int i = 0; i < strlen(user->password); i++) {
        printf("*");
    }
    printf("\n");
}