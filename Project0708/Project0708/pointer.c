#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test1(int x) {
	x = 20;
}
void test2(int* p) {
	*p = 30;
}

int main() {
	int x = 10;
	test1(x);
	printf("test1 ȣ�� �Ŀ� x�� �� : %d\n", x);

	test2(&x);
	printf("test2 ȣ�� �Ŀ� x�� �� : %d\n", x);


	return 0;
}