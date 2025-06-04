#include <stdio.h>
#include <string.h>
#include "contact.h"

void testContact();

int main()
{
	testContact();

	return 0;
}

void testContact()
{
	Contact c1 = { "홍길동", "01027780298", MAN, 2025 };
	Contact c2 = { "홍길동", "01027780298", MAN, 2025 };
	Contact c3 = { "김길동", "01027780298", MAN, 2025 };

	printContact(c1);
	printContactPtr(&c2);

	int result1 = is_equalContact(c1, c2);
	int result2 = is_equalContactPtr(&c2, &c3);

	printf("c1과 c2는 %s\n", result1 ? "같습니다" : "다릅니다");
	printf("c2과 c3는 %s\n", result2 ? "같습니다" : "다릅니다");

}