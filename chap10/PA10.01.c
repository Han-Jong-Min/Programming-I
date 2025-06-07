
/* 파일명: PA10.01.c

  * 내용: 인터넷 사이트에 로그인할 때 사용되는 아이디와 패스워드를 관리하기 위한
		  LOGIN 구조체를 정의하시오. 아이디와 패스워드는 각각 최대 20글자까지 입력할 수 있다.
		  LOGIN 구조체 변수를 선언한 다음 아이디와 패스워드를 입력받아 저장하고 출력하는 프로그램을
		  작성하시오. 패스워드를 출력할 때는 패스워드의 내용은 보이지 않도록 패스워드 글자 수만큼 *을
		  대신 출력하시오.

  * 작성자: 한종민

  * 날짜: 2025.06.07.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

#define ID_SIZE 21
#define PW_SIZE 21

  // LOGIN 구조체 정의
typedef struct {
    char id[ID_SIZE];
    char password[PW_SIZE];
} LOGIN;

// 함수 선언
int assignment01(void);
void inputLogin(LOGIN* user);
void printLogin(const LOGIN* user);

int main() {
    return assignment01();
}

// 메인 기능 함수
int assignment01(void) {
    LOGIN user;

    inputLogin(&user);
    printLogin(&user);

    return 0;
}

// 사용자로부터 아이디와 패스워드 입력 받기
void inputLogin(LOGIN* user) {
    printf("아이디: ");
    scanf("%20s", user->id);

    printf("패스워드: ");
    scanf("%20s", user->password);
}

// 아이디는 그대로, 패스워드는 *로 출력
void printLogin(const LOGIN* user) {
    printf("\n[로그인 정보 출력]\n");
    printf("아이디: %s\n", user->id);

    printf("패스워드: ");
    for (int i = 0; i < strlen(user->password); i++) {
        printf("*");
    }
    printf("\n");
}