// 반환값 같으면 1, 그렇지 않으면 0 반환
// 입력: 비교할 두 Contact 값

#include <stdio.h>
#include <string.h>
#include "contact.h"


int is_equalContact(Contact a, Contact b)
{
	if (a.year == b.year && a.gender == b.gender &&
		strcmp(a.name, b.name) == 0 &&
		strcmp(a.phone, b.phone) == 0)
	{
		return 1;
	}
	return 0;
}

void printContact(Contact ct)
{
	printf("이름 : %s\n", ct.name);
	printf("전번 : %s\n", ct.phone);
	printf("성별 : %s\n", ct.gender == MAN ? "남자" : "여자");
	printf("연도 : %d\n", ct.year);
}

int is_equalContactPtr(Contact* a, Contact* b) // pointer
{
	if (a->year == b->year && a->gender == b->gender &&
		strcmp(a->name, b->name) == 0 &&
		strcmp(a->phone, b->phone) == 0)
	{
		return 1;
	}
	return 0;
}

void printContactPtr(Contact* ct)
{
	printf("이름 : %s\n", ct->name);
	printf("전번 : %s\n", ct->phone);
	printf("성별 : %s\n", ct->gender == MAN ? "남자" : "여자");
	printf("연도 : %d\n", ct->year);
}