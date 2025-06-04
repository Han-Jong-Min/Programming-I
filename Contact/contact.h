// #pragma once

#ifndef _CONTACT_H_3141592
#define _CONTACT_H_3141592


enum gender { MAN, WOMAN };
typedef enum gender Egender;

typedef struct contact {
	char name[24];
	char phone[24];
	Egender gender;
	int year;
} Contact;

int is_equalContact(Contact a, Contact b);
void printContact(Contact ct);
int is_equalContactPtr(Contact* a, Contact* b);
void printContactPtr(Contact* ct);

#endif //_CONTACT_H_3141592#pragma once