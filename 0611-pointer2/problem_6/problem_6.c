#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


get_min_max(int* max, int* min, int arr[], int i) {
	//최소값을 첫 배열값으로 두고 밑에 for 문에서 반복문을 통
//해 배열을 늘려가며 처음과 비교하고 그보다 크면 큰 값이* max즉 비교한 대상의 배열로 정의 되므로 반복문 안에서 계속 비교가 되며 최소값이 튀어나오는것이다.* /
	*min = arr[0];
	*max = arr[0];
	for (i = 0; i < SIZE; i++) {
		if (arr[i] > * max) {
			*max = arr[i];

		}
		else if (arr[i] < *min) {
			*min = arr[i];
		}
	}

}

int main() {
	int i = 0, max = 0, min = 0;
	int arr[SIZE] = { 5, 4, 3, 10, 15, 18, 6, 8, 99, 1 };
	int* p = &arr[0];

	printf("배열: ");
	for (i = 0; i < 10; i++, p++) {
		printf("%d ", *p);
	}
	get_min_max(&max, &min, arr, i); //주소를 매개변수로 받는다.//
	printf("\n최대값: %d \n최소값: %d", max, min);
	return 0;
}