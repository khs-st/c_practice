#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


get_rect_info(int *a, int* b, int* c, int* d) {
	*c = *a * *b;
	*d = 2 * (*a + *b);
	printf("넓이:%2d\n둘레:%2d", *c, *d);
}




int main() {
	int x, y, w, z;
	int* a = &x;
	int* b = &y;
	int* c = &w;
	int* d = &z;
	printf("가로? ");
	scanf("%d", &x);
	printf("세로? ");
	scanf("%d", &y);
	get_rect_info(a, b, c, d);
	
	return 0;
}