#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


	/*1��
	int main(){
	int i;
	double x[3] = {1,2,3};
	double *p= &x;

	for (i = 0; i < 3; i++) {
		printf("x��[%d]�� �ּ�: %p\n", i, x);
	}
	return 0;
	}

	*/
	/*2��
	int main(){
	int i;
	double arr[10] = { 1.0,2,3,4,5,6,7,8,9,11};
	double *p = &arr[0];
	for (i = 0; i < 10; i++,p++) {
		printf(" %.2f ", *p);
		 //p��  �迭�� �ε����� ���ϰ� *p�� �迭���� �ε����� �ִ� ���ڸ� ����Ų��.//
	}
	return 0;
	}
	*/

	//3��
//	int main(){
//	int i;
//	int arr[10] = { 1,2,3,13,5,6,14,8,9,12 };
//
//
//	int* p1 = &arr[0];
//
//	printf("�迭: ");
//
//	for (i = 0; i < 10; i++, p1++) {
//
//		printf("%d ", *p1);
//
//	}
//	printf("\n����: ");
//	int* p2 = &arr[9];
//	for (i = 0; i < 10; i++, p2--) {
//		printf("%d ", *p2);
//	}
//
//	return 0;
//}

//4��
//int main() {
//	int i;
//	double avg=0,sum=0;
//	double arr[10] = { 1.5,2.0,3.0,4.0,5.0,6.0,7.0,8.0,9.0,10.0 };
//	double* p = &arr[0];
//	printf("�迭: ");
//	for (i = 0; i < 10; i++, p++) {
//		printf("%.2f ", *p);
//		sum += *p;
//	}
//	printf("\n");
//	printf("���: ");
//	avg = sum / i;
//	printf("%.6f", avg);
//	return 0;
//}