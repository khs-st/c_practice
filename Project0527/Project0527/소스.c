#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i, j, k; //i가 행 j가 빈칸의 크기 j가 9면 빈칸이 9개를 차지하므로 숫자를 넣을 수 있는 공간이 1칸이다.//
	int num = 2;
	for (i = 0; i < 10; i++) 
	{
		for (j = i; j < 9; j++) 
		{
			printf("   ");
		}
		for (k = 0; k <= i; num++) 
		{
			if (Prime(num) == 1)
			{
				printf("%5d ", num);
				k++;
			}
		}
		printf("\n");
	}

	printf("\n\n\n");
	for (i = 0; i < 10; i++) 
	{
		for (j = 0; j <=i; j++) 
		{
			printf("  ");
		}
		for (k = 9; k >= i; num--)
		{
			if (Prime(num) == 1)
			{
				printf("%5d ", num);
				k--;
			}
		}
		printf("\n");
	}
	
}

int Prime(int num)
{

	int i;
	int j = num /2;
	for (i = 2; i <= j; i++){
		if (num % i == 0)
			return 0;
	}
	return 1;
}

