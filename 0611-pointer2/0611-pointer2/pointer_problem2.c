#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

arith_seq(int arr[SIZE] ,int i,int a) {
	int *p = arr[SIZE];
	printf("ù ��° ��? ");
	scanf("%d", *p);
	printf("����? ",a);
	scanf("%d", a);
	for (i = 0; i < 10; i++,p++) {
		printf("%d ", *p);
		*p = *(p + a);
	}
}



int main() {
	int i,j,a,b;
	int arr[SIZE];
	
	arith_seq(arr[SIZE],a,i);






	return 0;
}