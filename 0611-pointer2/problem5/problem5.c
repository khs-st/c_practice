#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


arith_seq(int arr[SIZE] ,int i,int a) {
	int *p = &arr[0];
	printf("ù ��° ��? ");
	scanf("%d", &arr[0]);
	printf("����? ");
	scanf("%d", &a);
	printf("��������:");
	for (i = 0; i < 10; i++) {
		printf(" %d ", *p);
		*p = *p + a;
	}
	
}

int main() {

	int arr[SIZE] = { 0 };
	int i = 0, a = 0;
	arith_seq(arr,i,a);

	return 0;
}
