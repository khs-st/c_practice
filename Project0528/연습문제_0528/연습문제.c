#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*1번
int get_perimeter(int width, int height) {

	int perimeter = (width *2)+ (height*2);
	return perimeter;
}
/*2번
double get_area_of_square(double length) {
	double area_of_square = (length * length);
	return area_of_square;
}
*/
/*3번
double distance(int x1, int y1, int x2, int y2) {
	int a, b, c;
	a = (x2 - x1);
	b = (y2 - y1);
	c = (a * a) + (b * b);
	double distance = sqrt(c);
	return distance;
}
*/
/*4번
int discount_price(double d, int p) {
	double rate;
	int price;
	rate = d / 100;
	price = p - (p * rate);
	return price;
}
*/
/*5번*/
int is_even(int num1){
	if(num1%2==0)
	printf("%d",num1);
		
		return 0;
	
}

int is_odd(int num2){
	if(num2%2==1)
	printf("%d",num2);
	
		return 0;
	

}


int main() {
	/*1번
	int x, y;
	printf("가로? :");
		scanf("%d", &x);
		printf("세로? : ");
		scanf("%d", &y);
		printf("직사각형의 둘레 : %d", get_perimeter(x, y));
		printf("\n\n");
		
/* 2번	
		double l;
		printf("한 변의길이? : ");
		scanf("%lf", &l);
		printf("정사각형의 면적: %.6lf", get_area_of_square(l));
		printf("\n\n");
		*/
/*3번
		int x1, y1, x2, y2;
		printf("직선의 시작점 좌표? ");
		scanf("%d %d", &x1, &y1);
		printf("직선의 끝점 좌표? ");
		scanf("%d %d", &x2, &y2);
		printf("(%d,%d)~(%d,%d) 직선의 길이: %lf",x1,y1,x2,y2, distance(x1,y1,x2,y2));
		*/
/*4번
	
	double d;
	int  p;

	printf("할인율(%%)? ");
	scanf("%lf", &d);
	while (1)
	{
		printf("제품의 가격? ");
		scanf("%d", &p);
		if (p == 0) break;
		printf("할인가:%d원 ", discount_price(d,p));
	}
*/
	/*5번*/
	int a=0, num1 = 0, num2 = 0;
	while (1) {
	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	
		printf("%d", a);
		scanf("%d", &a); 
		if (a == 0) break;
	}
		printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", is_even,is_odd);
	
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		return 0;

}