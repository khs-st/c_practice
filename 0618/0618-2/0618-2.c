#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <ctype.h> //���� ó�� ���̺귯��
int count_space(const char* s) {
	int count = 0;
	while (s[0]!= '\0') { //while(*s!='\0')�� ���� �ǹ�
		if (isspace(s[0])) //*s�� ���� �������� �˻��Ѵ�.
			count++;
		s++; //s�� ���� ���ڸ� ����Ų��.
	}
	//s[0]='A'; //s�� ����Ű�� ���ڿ��� ������ �� �����Ƿ� ������ ����
	//strcpy(s, "xyz"); // strcpy�� �Ű������� ���������� �ٸ��Ƿ� ������ ���

	return count;
}


int main() {
	char str[64] = "This is a practice/and korea b&c and jetema etc..\n";

	puts(str);
	printf("���� ������ ����: %d\n", count_space(str));
	
	return 0;


}

