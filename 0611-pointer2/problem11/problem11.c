#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


get_rect_info(int *a, int* b, int* c, int* d) {
	*c = *a * *b;
	*d = 2 * (*a + *b);
	printf("����:%2d\n�ѷ�:%2d", *c, *d);
}




int main() {
	int x, y, w, z;
	int* a = &x;
	int* b = &y;
	int* c = &w;
	int* d = &z;
	printf("����? ");
	scanf("%d", &x);
	printf("����? ");
	scanf("%d", &y);
	get_rect_info(a, b, c, d);
	
	return 0;
}