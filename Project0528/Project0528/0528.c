#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int Add(int num1, int num2)
{
	return num1 + num2;
}

void hi(void) { printf("Hi! Let's start C programming.\n"); } //리턴값과 매개변수가 없는 함수//

void draw_line(char ch, int len) { //리턴값은 없고 매개변수만 있는 함수//

	int i;
	for (i = 0; i < len; i++)
		printf("%c", ch);
	printf("\n");


}

void print_sum(int count) {      //리턴값은 없고 매개변수만 있는 함수//
	int i;
	int num;
	int sum = 0;

	printf("%d개의 정수? ", count);
	for (i = 0; i < count; i++) {
		scanf("%d", &num);
		sum += num;
	}
	printf("합계: %d\n", sum);
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
	printf("덧셈결과1: %d\n", result);
	result = Add(5, 8);
	printf("덧셈결과2: %d\n", result);


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
	
	draw_line('*', 20); //ch와 #이 매칭(리턴값이 없으므로 바로 draw_line 입력한것)
	
	print_sum(5);

	draw_line('*', 20);
	
	int fact;
	for (i = 1; i <= 5; i++) {
		fact = get_factorial(i); //get_factorial(i)의 리턴 값을 저장한다.
		printf("%2d!=%3d\n", i, fact);
	}
	get_factorial(5); //리턴값을 어디에도 이용하지 않음.
	
	draw_line('*', 20);
	
	for (i = 1; i <= 5; i++) {
		printf("반지름이 %d일때 원의 면적:%.2f\n", i, get_area(i));
	}
	
	draw_line('*', 20);
	
	int x, y;
	int gcd;
	while (1) {
		printf("정수 2개를 입력해라. (0 0이면 종료): ");
		scanf("%d %d", &x, &y);
		if (x == 0 && y == 0)
			break;
		gcd = get_gcd(x, y);
		printf("%d와 %d의 GCD: %d\n", x, y, gcd);
	}

	draw_line('*', 20);
	
	int z;
	while (1)
	{
		printf("정수 3개를 입력하삼(0 0 0 입력 시 종료): ");
		scanf("%d %d %d", &x, &y, &z);
		if (x == 0 && y == 0 && z == 0) break;
		printf("최대값: %d\n", get_max(x, y, z));
	}
	
	
	
	return 0;
}