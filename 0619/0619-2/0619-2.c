#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {

	int arr_1[5];
	int* arr_2;
	int i;
	int size = 5;
	printf("ù ��° �迭");
	for (i = 0; i < 5; i++) {
		arr_1[i] = i + 1;
		printf("%3d ", arr_1[i]);
	}
	printf("\n");
	printf("�� ��° �迭");
	//�޸� �Ҵ�
	//arr_2 = (int*)malloc(sizeof(int) * size);
	arr_2 = (int*)calloc(size, sizeof(int)); //�����Ҵ�
	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%3d ", arr_2[i]);
	}
	printf("\n");
	printf("realloc �迭");
	realloc(arr_2, sizeof(int) * 10);
	for (int i = 5; i < 10; i++) {
		arr_2[i] = i + 1;
	}
	for (i = 0; i < 10; i++) {

		printf("%3d", arr_2[i]);
	}


	printf("\n");
	free(arr_2); //�޸� ����
	return 0;
}