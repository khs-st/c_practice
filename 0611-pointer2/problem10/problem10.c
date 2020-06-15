#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

add_matrix(int i, int j, int* px, int* py, int* p) {
	printf("x 행렬:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++, px++) {
			printf("%2d ", *px);
		}
		printf("\n");
		
	}
	px = px - 9;

	printf("\n");
	printf("y 행렬:\n");
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++, py++) {
			printf("%2d ", *py);
		}

		printf("\n");
		
	}
	py=py-9;
	printf("\n");


	printf("x + y 행렬:\n");

	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++,p++,px++,py++) {
			*p = *px + *py;
			printf("%2d ", *p);
		}
		printf("\n");
	}

}

int main() {
	int i = 0, j = 0;
	int x[3][3] = {
		{1,2,3},
		{4,5,6},
		{7,8,10}
	};
	int y[3][3] = {
		{4,5,6},
		{1,2,3},
		{11,12,13}
	};
	int res[3][3] = { 0 };
	int(*px)[3] = &x[0];
	int(*py)[3] = &y[0];
	int(*p)[3] = &res[0];
	add_matrix(i, j, px, py, p);

	return 0;
}
