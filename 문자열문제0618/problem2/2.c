#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int remove_space( char int_str[]) {
	char temp[120];
	int i, index = 0;
	for (i = 0; int_str[i] != 0; i++) { //���ڿ��� ���� ���������� �ݺ�.
		if (int_str[i] != ' ') { //int_str �迭�� i��° �׸��� ���� �ƴ� ��쿡�� out_str �� index��° �׸� ����.
			temp[index] = int_str[i];
			index++;
		}
	}
	temp[index] = 0; //���ڿ� ���� NULL ���� ����.
	index = 0; //out_str�迭�� ����� ���ڿ��� main�Լ����� ����ϱ����� �ٽ� int_str�� ����.
	for (i = 0; temp[i] != 0; i++) {
		int_str[index] = temp[i];
		index++;
	}
	int_str[index] = 0;
}


int main() {
	char int_str[120];
	int count = 0;
	printf("���ڿ�? ");
	gets_s(int_str, sizeof(int_str));
	remove_space(int_str);
	printf("%s\n", int_str);



	return 0;
}