#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char in_str[128]; //2^8개 까지만 가능
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("문자열? ");
	gets_s(in_str, sizeof(in_str)); //빈칸을 포함한 문자열 입력 
								//, 문자열을 받아 in_str에 저장하고 sizeof를 쓴 이유는 배열의 이름만 보고 크기가 얼마인지는모르기 때문에 크기를 정의 해줘야한다.
	puts(in_str);
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);
	puts(out_str);
	return 0;


}