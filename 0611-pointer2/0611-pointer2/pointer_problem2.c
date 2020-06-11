#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10

//5번

//arith_seq(int arr[SIZE] ,int i,int a) {
//	int *p = &arr[0];
//	printf("첫 번째 항? ");
//	scanf("%d", &arr[0]);
//	printf("공차? ");
//	scanf("%d", &a);
//	printf("등차수열:");
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

//6번//

get_min_max(int max, int min, int i) {
	int arr[SIZE] = { 5, 4, 3, 10, 15, 18, 6, 8, 99, 1 };
	int* p = &arr[0];
	printf("배열: ");
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
	printf("\n최대값: ", max);
	printf("\n");
	printf("최소값: ", min);
}


int main() {
	int i = 0, max = 0, min = 0;

	get_min_max(max, min, i);

	return 0;
}