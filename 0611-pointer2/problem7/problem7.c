#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


double reverse_array(double *p, int i){

	for (i = 0; i < SIZE; i++, p--) {

		printf(" %.1f ", *p);
	}
}




int main() {
	int i = 0;
	double arr[SIZE] = { 1.1,2.2,3.3,4.4,5.5,6.6,7.7,8.8,9.6,9.9 };
	double * p = &arr[0];
	
	printf("배열: ");
	for (i = 0; i < SIZE; i++, p++)
	{
		printf(" %.1f ", *p);
	}
	p = p - 1;
	printf("\n역순: ");
	reverse_array(p, i);

	return 0;
}
