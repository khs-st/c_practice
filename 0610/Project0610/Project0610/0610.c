#include <stdio.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS
//#define SIZE 7
//#define ROW 72
//#define COL 3

/*복사 배열
void copy_array(int source[], int target[], int size) {
	int i;
	for (i = 0; i < size; i++)
		target[i] = source[i];
}
void print_array(int arr[], int size) {
	int i;
	for (i = 0; i < size; i++)
		printf("%d ", arr[i]);
	printf("\n");
}
*/

int main() {
	/*
		int arr[5];
		int byte_size = 0;
		int size = 0;
		int i;

		byte_size = sizeof(arr);
		printf("배열의 바이트 크기: %d\n", byte_size); //하나의 배열에 4바이트고 총 arr[5]가 들어갔으므로 바이트크기는 20으로 출력.//

		size = sizeof(arr) / sizeof(arr[0]);
		printf("배열의 크기: %d\n", size);
		for (i = 0; i < size; i++)
			arr[i] = 0;
			*/

			/*
			int x;
			int y;
			int arr[9][9];
			printf("배열로 구구단을 출력해보자.\n");
			printf("\n");
			for (x= 0; x < 9; x++) {
				for (y = 0; y < 9; y++) {
					arr[x][y] = (x+1) * (y+1);
					printf("%2d * %2d = %2d ", x+1,y+1,  arr[x][y]);


				}
				printf("\n");

			}
			*/
			/*
			int data[] = { 78,34,52,15,63,15,25 };
			int size;
			int key, i;
			int found;

			size = sizeof(data) / sizeof(data[0]);
			printf("arr= ");
			for (i = 0; i < size; i++) {
				printf("%d ", data[i]);
			}
			printf("\n");
			printf("찾을 값(키)? ");
			scanf_s("%d", &key);
			found = 0;
			for (i = 0; i < size; i++) {
				if (data[i] == key) {
					found = 1;
					break;
				}
			}
			if (found == 1)
				printf("찾은 원소의 인덱스: %d\n", i);
			else
				printf("탐색 실패\n");
				*/

				/* 선택정렬//
				int data[SIZE] = { 7,3,9,5,1 };
				int i, j;
				int index, temp;
				for (i = 0; i < SIZE - 1; i++) {
					index = i;
					for (j = i + 1; j < SIZE; j++) {
						if (data[index] > data[j])
							index = j;
					}
					if (i != index) {
						temp = data[i];
						data[i] = data[index];
						data[index] = temp;
					}
				}
				printf("정렬 후: ");
				for (i = 0; i < SIZE; i++) {
					printf("%d ", data[i]);
				}
					printf("\n");
				*/
				/*버블정렬 오름차순
					int data[SIZE] = { 7,3,9,5,1 };
					int i, j;
					int temp;
					for (i = 0; i < SIZE - 1; i++) {
						for (j = i + 1; j < SIZE; j++) {
							if (data[i] > data[j]) {
								temp = data[i];
								data[i] = data[j];
								data[j] = temp;
							}
						}
					}
					printf("정렬 후: ");
					for (i = 0; i < SIZE; i++) {
						printf("%d ", data[i]);
					}
					printf("\n");

					*/

					/*72행 3열 2단부터 구구단
	int i, j,a;
	int data[ROW][COL];
	printf("배열로 구구단을 2단부터 출력해보자.\n");
	printf("\n");
	for (i = 0; i < ROW; ) {
			for (j = 1; j <=9; j++)
			{
				a = (i / 9) + 2;
				data[i][0] = a;
				data[i][1] = j;
				data[i][2] = a * j;
					++i;
		
			}
		
	}
	for (i = 0; i < ROW; i++) {
		printf("%2d*%2d=%3d", data[i][0], data[i][1], data[i][2]);
		printf("\n");
		printf("\n");

	}
	*/

/*cop_array함수 정의
int x[SIZE] = { 10, 30, 40, 50, 70 };
int y[SIZE] = { 0 };
int z[SIZE] = { 11 };
printf("x= ");
print_array(x, SIZE);
copy_array(x, y, 5);
printf("y= ");
print_array(y, SIZE);
*/

	return 0;
}