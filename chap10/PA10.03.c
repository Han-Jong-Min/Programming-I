/* ���ϸ�: PA10.03.c

  * ����: LOGIN ����ü �迭�� �̿��ؼ� �α��� ������ ���α׷����� �ۼ��Ͻÿ�.
          ���̵� �Է¹޾� LOGIN ����ü �迭���� ���̵� ã�� ���� �Է¹��� �н������
          ��ϵ� �н����带 ���ؼ� ������ "�α��� ����"�̶�� ����Ѵ�. LOGIN ����ü �迭��
          ũ�Ⱑ 5�� �迭�� �����ϰ� ������ ������ �ʱ�ȭ�ؼ� ����Ѵ�.
  

  * �ۼ���: ������

  * ��¥: 2025.06.07.

  * ����: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ID_SIZE 21
#define PW_SIZE 21
#define USER_COUNT 5

  // LOGIN ����ü ����
typedef struct {
    char id[ID_SIZE];
    char password[PW_SIZE];
} LOGIN;

// �Լ� ����
int assignment01(void);
int loginProcess(LOGIN users[], int size);
int findUserIndex(LOGIN users[], int size, const char* id);

int main() {
    return assignment01();
}

// ���� ó�� �Լ�
int assignment01(void) {
    // �̸� ��ϵ� ����� ���
    LOGIN users[USER_COUNT] = {
        {"admin", "admin123"},
        {"user1", "pass1"},
        {"user2", "pass2"},
        {"guest", "guest"},
        {"test", "test123"}
    };

    return loginProcess(users, USER_COUNT);
}

// �α��� �õ� �Լ�
int loginProcess(LOGIN users[], int size) {
    char inputId[ID_SIZE];
    char inputPw[PW_SIZE];

    printf("���̵� �Է��ϼ���: ");
    scanf("%20s", inputId);

    // ���̵� �˻�
    int index = findUserIndex(users, size, inputId);
    if (index == -1) {
        printf("���̵� �������� �ʽ��ϴ�.\n");
        return 1;
    }

    // �н����� �Է� �� ��
    printf("�н����带 �Է��ϼ���: ");
    scanf("%20s", inputPw);

    if (strcmp(users[index].password, inputPw) == 0) {
        printf("�α��� ����\n");
    }
    else {
        printf("�н����尡 Ʋ�Ƚ��ϴ�.\n");
    }

    return 0;
}

// ���̵� ���� ����� �ε����� ã�� �Լ� (������ -1 ��ȯ)
int findUserIndex(LOGIN users[], int size, const char* id) {
    for (int i = 0; i < size; i++) {
        if (strcmp(users[i].id, id) == 0) {
            return i;
        }
    }
    return -1;
}