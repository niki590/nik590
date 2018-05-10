#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "List.h"

int main()
{
	int of=12;
	NODE* niki = link_create();
	link_push(niki, "1");
	link_push(niki, "2");
	link_push(niki, "3");
	link_delete(niki);
	printf("hi");
	printf("%s", of);
	scanf("%d", &of);
	printf("%d", of);
	scanf("%d", &of);
	return 0;
}