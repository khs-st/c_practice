#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS



int main() {

	int i, j, num = 5;; //i가 행 j가 빈칸의 크기 j가 9면 빈칸이 9개를 차지하므로 숫자를 넣을 수 있는 공간이 1칸이다.//

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