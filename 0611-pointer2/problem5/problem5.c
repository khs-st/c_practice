#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


arith_seq(int *p ,int i,int a) {
	
	
	for (i = 0; i < 10; i++) {
		printf(" %d ", *p);
		*p = *p + a;
	}
	
}

int main() {

	int arr[SIZE] = { 0 };
	int i = 0, a = 0;
	int* p = &arr[0];
	printf("ù ��° ��? ");
	scanf("%d", &*p);
	printf("����? ");
	scanf("%d", &a);
	printf("��������:");
	arith_seq(arr,i,a);

	return 0;
}
