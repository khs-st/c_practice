#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {
	char in_str[128]; //2^8�� ������ ����
	char out_str[128];
	int hour = 12, min = 30, sec = 45;

	printf("���ڿ�? ");
	gets_s(in_str, sizeof(in_str)); //��ĭ�� ������ ���ڿ� �Է� 
								//, ���ڿ��� �޾� in_str�� �����ϰ� sizeof�� �� ������ �迭�� �̸��� ���� ũ�Ⱑ �������¸𸣱� ������ ũ�⸦ ���� ������Ѵ�.
	puts(in_str);
	sprintf(out_str, "%02d:%02d:%02d", hour, min, sec);
	puts(out_str);
	return 0;


}