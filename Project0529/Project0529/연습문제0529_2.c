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
/*10��
int is_leap_year(int year) {
	int leap_year = 0;
	for (year = 2000; year <= 2095; year++) {
		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0)) {
			leap_year = year;
			printf(" %d", year);
		}
	}
}
*/
/*11��
int is_leap_year(int year) {
	int leap_year = 0;

	if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
		return 4;
	else
		return 5;

}

int get_days_of_month(int m, int d, int year) {
	for (m = 1; m <= 12; m++)
	{
		if (m == 1 || m == 3 || m == 5 || m == 7 || m == 8 || m == 10 || m == 12)
			d = 31;
		if (m == 2) {
			if (is_leap_year(year)==4)
				d = 29;
			else if (is_leap_year(year) == 5)
				d = 28;
		}
		if (m == 4 || m == 6 || m == 9 || m == 11)
			d = 30;
		printf(" %d��: %d��", m, d);
	}
	return 2;
}
*/
/*12��
int check_data(int year, int month, int day) {
	if ((month != 0) && (month < 13) && (day < 32) && (day != 0) && (year != 0))
	{
		printf("�Է��� ��¥�� %d�� %d�� %d���Դϴ�.\n", year, month, day);
		return 2;

	}
	else {

		return 1;
	}

}
*/

/*13
int round_pos(int i,int j) {
	double n;

	for (i = 1; i < 4; i++) {
		n = 1357 / pow(10, i);
		j = round(n, i) * pow(10, i);
		printf("%d��° �ڸ����� �ݿø��� ���: %d\n", i,j);
	}
	return 2;
}
*/

/*14��
float get_quadrant(float x, float y) {
	if (x > 0 && y > 0) {
		printf("1��и��� ���Դϴ�.\n\n");
		return 1;
	}
	if (x < 0 && y > 0) {
		printf("2��и��� ���Դϴ�.\n\n");
		return 2;
	}
	if (x < 0 && y < 0) {
		printf("3��и��� ���Դϴ�.\n\n");
		return 3;
	}
	if (x > 0 && y < 0) {
		printf("4��и��� ���Դϴ�.\n\n");
		return 4;
	}
	if (x==0 || y==0)
		return 0;
}
*/

//15��
int divisors(int measure, int num, int i)
{
	int count = 0;
	for (i = 0; i < 3; i++) {
		num = rand() % 999;
		printf("%d�� ���: ", num);
		for (measure = 1; measure <= num; measure++) {
			if (num % measure == 0)
			{
				printf(" %d", measure);
				count++;
			}

		}
		return count;
	}

}


/*16��
int graph(int data, int scale, int num) {
	int i=0,j=0;
	scale = 100;
	for (i = 0; i < 3; i++)
	{
		num = rand() % 9999;
		//num = (rand() % 9999)+1000;�����Լ��� �ۼ��Ͽ��µ� ó�����ڰ� 10���ڸ��� ������ 1000~n���� �ٲ۰�//
		printf("\n%d:", num);
		data = num / scale;
		for (j = 0; j < data; j++) {
			printf("*");
		}
	}

}
*/

/*17��
float electric_charge(int e)
{
	double basePrice = 910;
	double result = 0;
	for (int i = 1; i <= e; i++)
	{
		if (i <= 200)
		{
			result += 93.3;	//e=200kwh ���Ϸ� ��� ���� ��� 93.3*200 +�⺻���//
		}
		else if (i <= 400)
		{
			result += 187.9;
			basePrice = 1600;
		}
		else
		{
			result += 280.6;
			basePrice = 7300;
		}
	}
	return result + basePrice;  //ù �⺻��� 910 �� �����־���Ѵ�.//
}

*/










/*1��
int main() {
int x, y;
printf("����? :");
	scanf("%d", &x);
	printf("����? : ");
	scanf("%d", &y);
	printf("���簢���� �ѷ� : %d", get_perimeter(x, y));
	printf("\n\n");
	return 0;

}
		*/
		/* 2��
		int main() {
				double l;
				printf("�� ���Ǳ���? : ");
				scanf("%lf", &l);
				printf("���簢���� ����: %.6lf", get_area_of_square(l));
				printf("\n\n");
				return 0;

}
				*/

				/*3��
				int main() {
						int x1, y1, x2, y2;
						printf("������ ������ ��ǥ? ");
						scanf("%d %d", &x1, &y1);
						printf("������ ���� ��ǥ? ");
						scanf("%d %d", &x2, &y2);
						printf("(%d,%d)~(%d,%d) ������ ����: %lf",x1,y1,x2,y2, distance(x1,y1,x2,y2));
						return 0;

}
						*/

						/*4��
						int main() {
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
							return 0;

}
						*/

						/*5��
						int main() {
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
						return 0;

}
						*/

						/*6��
						int main() {
						int menu = 0;
						char file;

						while (1) {
						printf("[1. ���� ���� 2.���� ���� 3.�μ� 0.����] ����? ");
						scanf("%d", &menu);
						if (menu == 0)
							break;
						if(choose_menu(menu)==1);

						}
						return 0;

}
						*/

						/*7��
						int main() {
						int prime, N, count = 0;

						printf("1~N������ �Ҽ��� ���մϴ�. N��? ");
						scanf("%d", &N);
						printf("\n");
						count = is_prime(N);
						printf("\n");
						printf("�Ҽ��� ��� %d���Դϴ�.", count);
						return 0;

}
						*/

						/*8��
						int main() {
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
						return 0;

}
						*/

						/*9��
						int main() {
			char op = 0;
			double result = 0,left = 0, right = 0, sum = 0;
			while (1)
			{
				printf("���� (0 0 0 �Է� �� ����)?  ");
				scanf("%lf %c %lf", &left, &op, &right);
				if (op == '0' && left==0 && right==0) break;
				printf("%lf\n", calculator(left,op,right));
			}
			return 0;

}
			*/

			/*10��
			int main() {
			int year = 0, i=0;
			printf("2000~2100������ ����\n");
			printf(" %d\n", is_leap_year(year));
			return 0;

}
			*/

			/*11��
			int main() {
			int year = 0, m = 0, d = 0;
			printf("����? ", year);
			scanf("%d", &year);
			printf("[ %d�� ]\n", year);
			if (get_days_of_month(m, d, year) == 2)
			return 0;

}
			*/

			/*12��
			int main() {
				int year = 0, month = 0, day = 0;
				while (1)
				{
					printf("��¥ (�� �� ��)? ", year, month, day);
					scanf("%d %d %d", &year, &month, &day);
					if (check_data(year, month, day) == 2) break;
					if (check_data(year, month, day) == 1)
					{
						printf("�߸� �Է��ϼ̽��ϴ�. ��ȿ�� ��¥�� �Է��ϼ���.\n");
					}

				}
				return 0;

}
				*/

		/*
				int main() {
	int i=0,j=0;

	if (round_pos(i, j) == 2)
	return 0;

}
				*/

/*14��
int main() {
	float x = 0, y = 0;
	while (1) {
		printf("���� ��ǥ (x, y)? ",x,y);
		scanf("%f %f", &x, &y);
			if (get_quadrant(x, y) == 0) break;
	}
	return 0;

}
	*/

	/*15��
	int main() {
	int i = 0, count = 0, measure = 0, num = 0;
	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		
		count = divisors(measure, num,i);
		printf("=> �� %d��\n", count);
	}
	return 0;

}
*/

		/*16��
		int main() {
		int num=0,data=0,scale=0;

			if(graph(data, scale, num));

			return 0;

		}
		*/

/*17��
		int main() {
		 while (1)
		{
			int e;
			printf("�� ��뷮 (kWh) ? ");
			scanf("%d", &e);
			if (e == -1)
				break;
			printf("���� ��� : %0.0lf��\n", electric_charge(e));
		}
			return 0;

		}
		*/
