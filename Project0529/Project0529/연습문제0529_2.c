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
/*5��
int is_even(even) {
	even++;
	return even;
}

int is_odd(odd) {
	odd++;
	return odd;
}


*/
/*6��
int choose_menu(menu) {
	if (menu == 1)
		printf("���� ���⸦ �����մϴ�.\n");
	else if (menu != 1)
		printf("");
	return 1;
}
*/
/*7��*/
int is_prime(int num) {
		num++;
	return num;
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
				/*5��
	int num, i = 0, j = 0, even = 0, odd = 0;


	printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
	while (1)
	{
		scanf("%d", &num);
		if (num == 0) break;
		else if (num % 2 == 0)

			even = is_even(even);
		else
			odd = is_odd(odd);
	}
	printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.", even, odd);
	*/

	/*6��
	int menu = 0;
	char file;

	while (1) {
	printf("[1. ���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
	scanf("%d", &menu);
	if (menu == 0)
		break;
	menu = choose_menu(menu);

	}
	*/
	/*7��*/
	int primenumber, N, num = 0;

	printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
	scanf("%d", &N);
	for (primenumber = 2; primenumber < N; primenumber++) {

		if (N % primenumber == 0)
			printf("  %d", primenumber);
	}
		printf("\n");
		num = is_prime(num);
		printf("�Ҽ��� ��� %d���Դϴ�.", num);
	





















	return 0;

}