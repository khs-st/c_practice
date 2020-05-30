#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>

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
/*5번
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
/*6번

int choose_menu(num) {
	if (num == 1)
		printf("파일 열기를 수행합니다.\n");
	else if (num != 1)
		printf("");
	return 1;
}
*/
/*7번
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
/*8번은 문제에서 표준 C 라이브러리의 rand함수를 이용하라 언급해서 없다.*/
/*9번
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
				/*5번
				int num, even = 0, odd = 0;

				printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
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
				printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.",even , odd);
				*/

				/*6번
				int menu = 0;
				char file;

				while (1) {
				printf("[1. 파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
				scanf("%d", &menu);
				if (menu == 0)
					break;
				if(choose_menu(menu)==1);

				}
				*/
				/*7번
				int prime, N, count = 0;

				printf("1~N사이의 소수를 구합니다. N은? ");
				scanf("%d", &N);
				printf("\n");
				count = is_prime(N);
				printf("\n");
				printf("소수는 모두 %d개입니다.", count);
				*/
				/*8번
				int N = 100, i = 0,sum=0,num=0;

				printf("0~%d사이의 임의의 정수를 10개 생성해서 합계를 구합니다.",(N-1));
				printf("\n");
				for (i = 0; i < 10; i++) {
					num = rand()%100;
					printf("  %d", num);
					sum += num;
				}
				printf("\n");
				printf("합계: %d", sum);
				*/

				/*9번
	char op = 0;
	double result = 0,left = 0, right = 0, sum = 0;
	while (1)
	{
		printf("수식 (0 0 0 입력 시 종료)?  ");
		scanf("%lf %c %lf", &left, &op, &right);
		if (op == '0' && left==0 && right==0) break;
		printf("%lf\n", calculator(left,op,right));
	}
	*/
//10번//




















	return 0;

}