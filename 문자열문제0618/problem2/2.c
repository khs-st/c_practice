#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int remove_space( char int_str[]) {
	char temp[120];
	int i, index = 0;
	for (i = 0; int_str[i] != 0; i++) { //문자열의 끝을 만날때까지 반복.
		if (int_str[i] != ' ') { //int_str 배열의 i번째 항목이 공백 아닌 경우에만 out_str 의 index번째 항목에 복사.
			temp[index] = int_str[i];
			index++;
		}
	}
	temp[index] = 0; //문자열 끝에 NULL 문자 저장.
	index = 0; //out_str배열에 저장된 문자열을 main함수에서 사용하기위해 다시 int_str에 복사.
	for (i = 0; temp[i] != 0; i++) {
		int_str[index] = temp[i];
		index++;
	}
	int_str[index] = 0;
}


int main() {
	char int_str[120];
	int count = 0;
	printf("문자열? ");
	gets_s(int_str, sizeof(int_str));
	remove_space(int_str);
	printf("%s\n", int_str);



	return 0;
}