#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
/*1��
int get_perimeter(int width, int height) {

	int perimeter = (width *2)+ (height*2);
	return perimeter;
}
/*2��
double get_area_of_square(double length) {
	double area_of_square = (length * length);
	return area_of_square;
}
*/
/*3��
double distance(int x1, int y1, int x2, int y2) {
	int a, b, c;
	a = (x2 - x1);
	b = (y2 - y1);
	c = (a * a) + (b * b);
	double distance = sqrt(c);
	return distance;
}
*/
/*4��
int discount_price(double d, int p) {
	double rate;
	int price;
	rate = d / 100;
	price = p - (p * rate);
	return price;
}
*/
/*5��*/
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
	/*1��
	int x, y;
	printf("����? :");
		scanf("%d", &x);
		printf("����? : ");
		scanf("%d", &y);
		printf("���簢���� �ѷ� : %d", get_perimeter(x, y));
		printf("\n\n");
		
/* 2��	
		double l;
		printf("�� ���Ǳ���? : ");
		scanf("%lf", &l);
		printf("���簢���� ����: %.6lf", get_area_of_square(l));
		printf("\n\n");
		*/
/*3��
		int x1, y1, x2, y2;
		printf("������ ������ ��ǥ? ");
		scanf("%d %d", &x1, &y1);
		printf("������ ���� ��ǥ? ");
		scanf("%d %d", &x2, &y2);
		printf("(%d,%d)~(%d,%d) ������ ����: %lf",x1,y1,x2,y2, distance(x1,y1,x2,y2));
		*/
/*4��
	
	double d;
	int  p;

	printf("������(%%)? ");
	scanf("%lf", &d);
	while (1)
	{
		printf("��ǰ�� ����? ");
		scanf("%d", &p);
		if (p == 0) break;
		printf("���ΰ�:%d�� ", discount_price(d,p));
	}
*/
	/*5��*/
	int a=0, num1 = 0, num2 = 0;
	while (1) {
	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
	
		printf("%d", a);
		scanf("%d", &a); 
		if (a == 0) break;
	}
		printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", is_even,is_odd);
	
	
	
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		
		return 0;

}