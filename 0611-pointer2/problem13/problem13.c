#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>



int swap_array(int x[],int y[], int arr[]) {
	int i;
	for (i = 0; i < 10; i++) {
		arr[i] = x[i];
		x[i] = y[i];
		y[i] = arr[i];
	}
}




int main() {
	int i = 0;
	int a[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int b[10] = { 11,12,13,14,15,16,17,18,19,20 };
	int arr[10] = { 0 };
	printf(" a: ");
	
	for (i = 0; i < 10; i++)
	{
		printf(" %2d ", a[i]);
	}
	printf("\n b: ");
	for (i = 0; i < 10; i++)
	{
		printf(" %2d ", b[i]);
	}
	swap_array(a, b,arr);
	printf("\n\n<< swap_array È£Ãâ ÈÄ >>\n\n");
	printf(" a: ");
	for (i = 0; i < 10; i++)
	{
		printf(" %2d ", a[i]);
	}
	printf("\n b: ");
	for (i = 0; i < 10; i++)
	{
		printf(" %2d ", b[i]);
	}
	return 0;
}