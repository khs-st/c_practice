#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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
int is_even(num) {

	if (num % 2 == 0 && num != 0) {
		return 3;
	}
}

int is_odd(num) {
	if (num % 2 == 1 && num != 0) {
		return 4;
	}
}
*/
/*6��

int choose_menu(num) {
	if (num == 1)
		printf("���� ���⸦ �����մϴ�.\n");
	else if (num != 1)
		printf("");
	return 1;
}
*/
/*7��
int is_prime(int N) {
	int i = 0, prime = 0, count = 0;
	for (prime = 2; prime <= N; prime++)
	{
		for (i = 2; i <= prime; i++)
			if (prime % i == 0) break;
		if (prime == i)
		{
			printf(" %d", prime);
			count++;
		}
	}

	return count;
}
*/
/*8���� �������� ǥ�� C ���̺귯���� rand�Լ��� �̿��϶� ����ؼ� ����.*/
/*9��
double calculator(double left,char op, double right)
{
	double result = 0;
	switch (op)
	{
	case '+':
		result = left + right; break;
	case '*':
		result = left * right; break;
	default:
		break;

	}
	return result;
}
*/















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
				int num, even = 0, odd = 0;

				printf("������ ��ĭ���� �����ؼ� �Է��ϼ���.(�������� 0 �Է�)\n");
				while (1)
				{
					scanf("%d", &num);
					if (num == 0) break;
					if (is_even(num) == 3)
					{
						even++;
					}
					if (is_odd(num) == 4)
					{
						odd++;
					}
				}
				printf("�Է¹��� ���� �� ¦���� %d��, Ȧ���� %d���Դϴ�.",even , odd);
				*/

				/*6��
				int menu = 0;
				char file;

				while (1) {
				printf("[1. ���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
				scanf("%d", &menu);
				if (menu == 0)
					break;
				if(choose_menu(menu)==1);

				}
				*/
				/*7��
				int prime, N, count = 0;

				printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
				scanf("%d", &N);
				printf("\n");
				count = is_prime(N);
				printf("\n");
				printf("�Ҽ��� ��� %d���Դϴ�.", count);
				*/
				/*8��
				int N = 100, i = 0,sum=0,num=0;

				printf("0~%d������ ������ ������ 10�� �����ؼ� �հ踦 ���մϴ�.",(N-1));
				printf("\n");
				for (i = 0; i < 10; i++) {
					num = rand()%100;
					printf("  %d", num);
					sum += num;
				}
				printf("\n");
				printf("�հ�: %d", sum);
				*/

				/*9��
	char op = 0;
	double result = 0,left = 0, right = 0, sum = 0;
	while (1)
	{
		printf("���� (0 0 0 �Է� �� ����)?  ");
		scanf("%lf %c %lf", &left, &op, &right);
		if (op == '0' && left==0 && right==0) break;
		printf("%lf\n", calculator(left,op,right));
	}
	*/
//10��//




















	return 0;

}