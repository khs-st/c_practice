#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



fill_2d_array(int i, int j, int* p) {
	for (i = 0; i < 4; i++) {
		for (j = 0; j < 5; j++) {
			printf(" %2d ", *p);
			
		}
		printf("\n");
		printf("\n");
	}
}

int main() {
	int i = 0, j = 0;
	int arr[4][5] = { 0 };
	int(*p)[5] = &arr[0];
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &*p);
	printf("\n");
	fill_2d_array(i, j, p);

	return 0;
}
