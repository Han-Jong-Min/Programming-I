/* 파일명: PA6.06.c

  * 내용: 다음과 같이 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는
          choose_menu 함수를 작성하시오. 잘못된 번호를 선택하면 올바른 번호를
          선택할 때까지 계속 메뉴를 출력하고 다시 선택받아야한다. 즉 choose_menu
          함수는 반드시 0~3사이의 값을 리턴해야 한다. choose_menu의 리턴값에 따라
          어떤 메뉴가 선택되었는지 간단히 출력하는 프로그램을 작성하시오.

  * 작성자: 한종민

  * 날짜: 2025.05.20.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

  /*
   * 함수명: choose_menu
   * 기능: 메뉴를 출력하고 선택된 메뉴 항목의 번호를 리턴하는 함수
   * 반환값: 0~3 사이의 정수
   */
int choose_menu(void) {
    int choice;

    while (1) {
        printf("[1. 파일 열기  2. 파일 저장  3. 인쇄  0. 종료] 선택? ");
        scanf("%d", &choice);

        if (choice >= 0 && choice <= 3)
            return choice;  // 유효한 선택
        // 잘못된 입력이면 다시 반복
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
            printf("파일 열기를 수행합니다.\n");
            break;
        case 2:
            printf("파일 저장을 수행합니다.\n");
            break;
        case 3:
            printf("인쇄를 수행합니다.\n");
            break;
        }
    }

    return 0;
}