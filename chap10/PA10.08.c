/* 파일명: PA10.08.c

  * 내용: 커피숍에서 판매되는 제품 정보를 나타내는 PRODUCT 구조체를 정의하시오. 각 
		  제품별로 제품명, 가격, 재고를 저장할 수 있어야 한다. PRODUCT 구조체를 매개변수로
		  전달받아 제품 정보를 출력하는 print_product 함수를 정의하시오. PRODUCT 구조체 변수를
		  선언한 다음 제품명, 가격, 재고를 입력받아 저장하고 출력하는 프로그램을 작성하시오
		  참고로 제품명은 빈칸 없는 한 단어로 입력한다.

  * 작성자: 한종민

  * 날짜: 2025.06.07.

  * 버전: v1.0

  */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#define NAME_SIZE 50

  // PRODUCT 구조체 정의
typedef struct {
    char name[NAME_SIZE];  // 제품명
    int price;             // 가격
    int stock;             // 재고
} PRODUCT;

// 함수 선언
void print_product(PRODUCT p);
int assignment01(void);

int main() {
    return assignment01();
}

// 메인 기능 함수
int assignment01(void) {
    PRODUCT item;

    // 입력
    printf("제품명을 입력하세요 (공백 없이): ");
    scanf("%s", item.name);

    printf("가격을 입력하세요: ");
    scanf("%d", &item.price);

    printf("재고를 입력하세요: ");
    scanf("%d", &item.stock);

    // 출력
    print_product(item);

    return 0;
}

// 제품 정보 출력 함수
void print_product(PRODUCT p) {
    printf("\n[제품 정보]\n");
    printf("제품명: %s\n", p.name);
    printf("가격: %d원\n", p.price);
    printf("재고: %d개\n", p.stock);
}