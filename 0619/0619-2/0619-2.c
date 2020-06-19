#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include <stdlib.h>



int main() {

	int arr_1[5];
	int* arr_2;
	int i;
	int size = 5;
	printf("첫 번째 배열");
	for (i = 0; i < 5; i++) {
		arr_1[i] = i + 1;
		printf("%3d ", arr_1[i]);
	}
	printf("\n");
	printf("두 번째 배열");
	//메모리 할당
	//arr_2 = (int*)malloc(sizeof(int) * size);
	arr_2 = (int*)calloc(size, sizeof(int)); //동적할당
	for (int i = 0; i < 5; i++) {
		arr_2[i] = arr_1[i];
		printf("%3d ", arr_2[i]);
	}
	printf("\n");
	printf("realloc 배열");
	realloc(arr_2, sizeof(int) * 10);
	for (int i = 5; i < 10; i++) {
		arr_2[i] = i + 1;
	}
	for (i = 0; i < 10; i++) {

		printf("%3d", arr_2[i]);
	}


	printf("\n");
	free(arr_2); //메모리 해제
	return 0;
}