#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


arith_seq(int arr[SIZE] ,int i,int a) {
	int *p = &arr[0];
	printf("첫 번째 항? ");
	scanf("%d", &arr[0]);
	printf("공차? ");
	scanf("%d", &a);
	printf("등차수열:");
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
