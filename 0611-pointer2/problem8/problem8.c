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
	printf("�迭�� ���ҿ� ������ ��? ");
	scanf("%d", &*p);
	printf("�迭: ");
	fill_array(i, p);

	return 0;
}
