#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


get_min_max(int* max, int* min, int arr[], int i) {
	//�ּҰ��� ù �迭������ �ΰ� �ؿ� for ������ �ݺ����� ��
//�� �迭�� �÷����� ó���� ���ϰ� �׺��� ũ�� ū ����* max�� ���� ����� �迭�� ���� �ǹǷ� �ݺ��� �ȿ��� ��� �񱳰� �Ǹ� �ּҰ��� Ƣ����°��̴�.* /
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

	printf("�迭: ");
	for (i = 0; i < 10; i++, p++) {
		printf("%d ", *p);
	}
	get_min_max(&max, &min, arr, i); //�ּҸ� �Ű������� �޴´�.//
	printf("\n�ִ밪: %d \n�ּҰ�: %d", max, min);
	return 0;
}