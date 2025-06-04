/*
 * 파일명: PA5.08.c

 * 내용: 비트 연산을 수행하는 계산기를 프로그램하시오. &는 비트 AND, |는 비트 OR, ^는 비트 XOR 연산을 처리한다.
		 "0xAB & 0xCC"처럼 연산식을 입력해서 연산 결과를 구한다. 비트 연산이므로 연산식을 입력받을 때
		 10진수, 8진수, 16진수를 사용할 수 있게 하고, 연산의 결과는 16진수로 출력한다.

 * 작성자: 한종민

 * 날짜: 2025.04.24.

 * 버전: v1.0

 */

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int assign_08(void);
int Bit();

int main() {
	int B = assign_08();

	return B;
}

int assign_08(void)
{
	int A, B;
	char OP;
	printf("비트 연산식? ");
	scanf("%i %c %i", &A, &OP, &B);
	Bit(A, B, OP);
	return 0;
}

int Bit(int a, int b, char op)
{
	int result = 0;

	// 비트 연산 수행
	switch (op) {
	case '&':
		result = a & b;
		break;
	case '|':
		result = a | b;
		break;
	case '^':
		result = a ^ b;
		break;
	default:
		printf("잘못된 연산자입니다.\n");
		return -1;
	}
	// 결과를 16진수로 출력
	printf("%X %c %X: %x\n", a, op, b, result);

	return 0;
}