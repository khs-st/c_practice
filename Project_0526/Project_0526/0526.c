#include <stdio.h>
#
int main(void) {

	double area;
	double x1, x2;
	double y1, y2;


	printf("x1�� y1�� ��ǥ:  ");
	scanf_s("%lf %lf", &x1, &y1);
	printf("x2�� y2�� ��ǥ:  ");
	scanf_s("%lf %lf", &x2, &y2);


	area = (x1 - x2) * (y1 - y2);
	printf("���簢�� ����: %lf\n", area);




	return 0;

	
}