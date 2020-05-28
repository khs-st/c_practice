#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

void hi(void) { printf("Hi! Let's start C programming.\n"); } //���ϰ��� �Ű������� ���� �Լ�//

void draw_line(char ch, int len) { //���ϰ��� ���� �Ű������� �ִ� �Լ�//

	int i;
	for (i = 0; i < len; i++)
		printf("%c", ch);
	printf("\n");


}

void print_sum(int count) {      //���ϰ��� ���� �Ű������� �ִ� �Լ�//
	int i;
	int num;
	int sum = 0;

	printf("%d���� ����? ", count);
	for (i = 0; i < count; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("�հ�: %d\n", sum);
}

int get_factorial(int num) {
	int i;
	int result = 1;
	for (i = 1; i <= num; i++)
		result *= i;
	return result;
}

double get_area(double radius)
{
	const double PI = 3.14159265359;
	return PI * radius * radius;
}
int get_gcd(int x, int y) {
	int r;
	while (y != 0) {
		r = x % y;
		x = y;
		y = r;
	}
	return x;
}

int get_max(int a, int b, int c) {
	int max = a > b ? a : b;
	max = c > max ? c : max;
	return max;
}







int main(void)
{
	int result;
	result = Add(3, 4);
	printf("�������1: %d\n", result);
	result = Add(5, 8);
	printf("�������2: %d\n", result);


	draw_line('*', 20);
	int i, j;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10 - i; j++) {
			printf("  ");
		}
		for (j = 0; j < 2 * i - 1; j++) {
			printf(" *");
		}
		printf("\n");
	}
	hi();
	
	draw_line('*', 20); //ch�� #�� ��Ī(���ϰ��� �����Ƿ� �ٷ� draw_line �Է��Ѱ�)
	
	print_sum(5);

	draw_line('*', 20);
	
	int fact;
	for (i = 1; i <= 5; i++) {
		fact = get_factorial(i); //get_factorial(i)�� ���� ���� �����Ѵ�.
		printf("%2d!=%3d\n", i, fact);
	}
	get_factorial(5); //���ϰ��� ��𿡵� �̿����� ����.
	
	draw_line('*', 20);
	
	for (i = 1; i <= 5; i++) {
		printf("�������� %d�϶� ���� ����:%.2f\n", i, get_area(i));
	}
	
	draw_line('*', 20);
	
	int x, y;
	int gcd;
	while (1) {
		printf("���� 2���� �Է��ض�. (0 0�̸� ����): ");
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		gcd = get_gcd(x, y);
		printf("%d�� %d�� GCD: %d\n", x, y, gcd);
	}

	draw_line('*', 20);
	
	int z;
	while (1)
	{
		printf("���� 3���� �Է��ϻ�(0 0 0 �Է� �� ����): ");
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0) break;
		printf("�ִ밪: %d\n", get_max(x, y, z));
	}
	
	
	
	return 0;
}