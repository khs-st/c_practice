#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void test1(int x) {
	x = 30;
}

void test2(int *p) {
	*p = 20;
}

int main() {
	/*
	int a = 0;
	scanf_s("%d", &a);
	int* p2 = (int*)0x12345678; //실행 에러가 발생할 수 있으므로 권장하지않는다.//
	int *p3 = &a;
	int *p4 = 0;
	int *p5 = NULL;
	printf("p2=%p\n", p2);
	printf("p3=%p\n", p3);
	printf("p4=%p\n", p4);
	printf("p5=%p\n", p5);

	*/
	/*
	int x = 10;
	test1(x);
	printf("test1 호출 후 x=%d\n", x);

	test2(&x);
	printf("test2 호출 후 x=%d\n", x);
	*/
	int data[3][5] = {
		{1,2,3,4,5},
		{6,7,8,9,10},
		{11,12,13,14,15}
	};
	int(*p)[5]=&data[0];
	int i,j;
	for (i = 0; i < 3; i++) 
	{
		for (j = 0; j < 5; j++)
			printf("%2d ", p[i][j]);
		printf("\n");
		printf("\n");
	}

	




	return 0;
}