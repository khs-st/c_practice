#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

//5��

//arith_seq(int arr[SIZE] ,int i,int a) {
//	int *p = &arr[0];
//	printf("ù ��° ��? ");
//	scanf("%d", &arr[0]);
//	printf("����? ");
//	scanf("%d", &a);
//	printf("��������:");
//	for (i = 0; i < 10; i++) {
//		printf(" %d ", *p);
//		*p = *p + a;
//	}
//	
//}
//
//int main() {
//
//	int arr[SIZE] = { 0 };
//	int i = 0, a = 0;
//	arith_seq(arr,i,a);
//
//	return 0;
//}

//6��//

get_min_max(int max, int min, int i) {
	int arr[SIZE] = { 5, 4, 3, 10, 15, 18, 6, 8, 99, 1 };
	int* p = &arr[0];
	printf("�迭: ");
	for (i = 0; i < 10; i++, p++) {
		printf("%d ", *p);
	}
	for (i = 0; i < 10; i++, p++){
		if (*p > *(p+i)) {
				max = *p;
				printf("%d \n", max);

			}

			else if (min < *(p + i)) {
				
				printf("%d ", min);

			}
	}
	printf("\n�ִ밪: ", max);
	printf("\n");
	printf("�ּҰ�: ", min);
}


int main() {
	int i = 0, max = 0, min = 0;

	get_min_max(max, min, i);

	return 0;
}