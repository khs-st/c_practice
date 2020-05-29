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
/*5번
int is_even(even) {
	even++;
	return even;
}

int is_odd(odd) {
	odd++;
	return odd;
}


*/
/*6번
int choose_menu(menu) {
	if (menu == 1)
		printf("파일 열기를 수행합니다.\n");
	else if (menu != 1)
		printf("");
	return 1;
}
*/
/*7번*/
int is_prime(int num) {
		num++;
	return num;
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
				/*5번
	int num, i = 0, j = 0, even = 0, odd = 0;


	printf("정수를 빈칸으로 구분해서 입력하세요.(마지막에 0 입력)\n");
	while (1)
	{
		scanf("%d", &num);
		if (num == 0) break;
		else if (num % 2 == 0)

			even = is_even(even);
		else
			odd = is_odd(odd);
	}
	printf("입력받은 정수 중 짝수는 %d개, 홀수는 %d개입니다.", even, odd);
	*/

	/*6번
	int menu = 0;
	char file;

	while (1) {
	printf("[1. 파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
	scanf("%d", &menu);
	if (menu == 0)
		break;
	menu = choose_menu(menu);

	}
	*/
	/*7번*/
	int primenumber, N, num = 0;

	printf("1~N사이의 소수를 구합니다. N은? ");
	scanf("%d", &N);
	for (primenumber = 2; primenumber < N; primenumber++) {

		if (N % primenumber == 0)
			printf("  %d", primenumber);
	}
		printf("\n");
		num = is_prime(num);
		printf("소수는 모두 %d개입니다.", num);
	





















	return 0;

}