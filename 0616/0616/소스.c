#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS



int main() {

	int i, j, num = 5;; //i�� �� j�� ��ĭ�� ũ�� j�� 9�� ��ĭ�� 9���� �����ϹǷ� ���ڸ� ���� �� �ִ� ������ 1ĭ�̴�.//

	for (i = 0; i < num; i++)
	{
		for (j = num - 1; j > i; j--)
		{
			printf(" ");
		}
		for (int j = 0; j <2* i + 1; j++) {
			printf("*");
		}
		printf("\n");
	}

}