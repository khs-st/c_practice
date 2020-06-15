#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


fill_array( int i, int *p) {
	for (i = 0; i < 10; i++) {
		printf(" %d ", *p);
	}

}

int main() {
	int i = 0;
	int arr[SIZE] = { 0 };
	int* p = &arr[0];
	printf("배열의 원소에 저장할 값? ");
	scanf("%d", &*p);
	printf("배열: ");
	fill_array(i, p);

	return 0;
}
