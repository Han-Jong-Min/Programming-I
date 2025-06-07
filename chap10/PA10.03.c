/* 파일명: PA10.03.c

  * 내용: LOGIN 구조체 배열을 이용해서 로그인 과정을 프로그램으로 작성하시오.
          아이디를 입력받아 LOGIN 구조체 배열에서 아이디를 찾은 다음 입력받은 패스워드와
          등록된 패스워드를 비교해서 같으면 "로그인 성공"이라고 출력한다. LOGIN 구조체 배열은
          크기가 5인 배열로 선언하고 적당한 값으로 초기화해서 사용한다.
  

  * 작성자: 한종민

  * 날짜: 2025.06.07.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ID_SIZE 21
#define PW_SIZE 21
#define USER_COUNT 5

  // LOGIN 구조체 정의
typedef struct {
    char id[ID_SIZE];
    char password[PW_SIZE];
} LOGIN;

// 함수 선언
int assignment01(void);
int loginProcess(LOGIN users[], int size);
int findUserIndex(LOGIN users[], int size, const char* id);

int main() {
    return assignment01();
}

// 메인 처리 함수
int assignment01(void) {
    // 미리 등록된 사용자 목록
    LOGIN users[USER_COUNT] = {
        {"admin", "admin123"},
        {"user1", "pass1"},
        {"user2", "pass2"},
        {"guest", "guest"},
        {"test", "test123"}
    };

    return loginProcess(users, USER_COUNT);
}

// 로그인 시도 함수
int loginProcess(LOGIN users[], int size) {
    char inputId[ID_SIZE];
    char inputPw[PW_SIZE];

    printf("아이디를 입력하세요: ");
    scanf("%20s", inputId);

    // 아이디 검색
    int index = findUserIndex(users, size, inputId);
    if (index == -1) {
        printf("아이디가 존재하지 않습니다.\n");
        return 1;
    }

    // 패스워드 입력 및 비교
    printf("패스워드를 입력하세요: ");
    scanf("%20s", inputPw);

    if (strcmp(users[index].password, inputPw) == 0) {
        printf("로그인 성공\n");
    }
    else {
        printf("패스워드가 틀렸습니다.\n");
    }

    return 0;
}

// 아이디를 가진 사용자 인덱스를 찾는 함수 (없으면 -1 반환)
int findUserIndex(LOGIN users[], int size, const char* id) {
    for (int i = 0; i < size; i++) {
        if (strcmp(users[i].id, id) == 0) {
            return i;
        }
    }
    return -1;
}