#include <stdio.h>
#
int main(void) {

	double area;
	double x1, x2;
	double y1, y2;


	printf("x1과 y1의 좌표:  ");
	scanf_s("%lf %lf", &x1, &y1);
	printf("x2와 y2의 좌표:  ");
	scanf_s("%lf %lf", &x2, &y2);


	area = (x1 - x2) * (y1 - y2);
	printf("직사각형 넓이: %lf\n", area);




	return 0;

	
}