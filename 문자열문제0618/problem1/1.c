#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>


int main() {
	char str[30];
	int count = 0;
	const char* s = str;
	printf("���ڿ�? ");
	gets_s(str, sizeof(str));
	puts(str);
	while (s[0]!='\0') {
		if (isspace(s[0]))
			count++;
		s++;
		
	}
	printf("���� ������ ����: %d\n", count);



	return 0;
}