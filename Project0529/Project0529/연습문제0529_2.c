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
/*10번
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
/*11번
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
		printf(" %d월: %d일", m, d);
	}
	return 2;
}
*/
/*12번
int check_data(int year, int month, int day) {
	if ((month != 0) && (month < 13) && (day < 32) && (day != 0) && (year != 0))
	{
		printf("입력한 날짜는 %d년 %d월 %d일입니다.\n", year, month, day);
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
		printf("%d번째 자리에서 반올림한 결과: %d\n", i,j);
	}
	return 2;
}
*/

/*14번
float get_quadrant(float x, float y) {
	if (x > 0 && y > 0) {
		printf("1사분면의 점입니다.\n\n");
		return 1;
	}
	if (x < 0 && y > 0) {
		printf("2사분면의 점입니다.\n\n");
		return 2;
	}
	if (x < 0 && y < 0) {
		printf("3사분면의 점입니다.\n\n");
		return 3;
	}
	if (x > 0 && y < 0) {
		printf("4사분면의 점입니다.\n\n");
		return 4;
	}
	if (x==0 || y==0)
		return 0;
}
*/

//15번
int divisors(int measure, int num, int i)
{
	int count = 0;
	for (i = 0; i < 3; i++) {
		num = rand() % 999;
		printf("%d의 약수: ", num);
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


/*16번
int graph(int data, int scale, int num) {
	int i=0,j=0;
	scale = 100;
	for (i = 0; i < 3; i++)
	{
		num = rand() % 9999;
		//num = (rand() % 9999)+1000;랜덤함수로 작성하였는데 처음숫자가 10의자리라서 기준을 1000~n으로 바꾼값//
		printf("\n%d:", num);
		data = num / scale;
		for (j = 0; j < data; j++) {
			printf("*");
		}
	}

}
*/

/*17번
float electric_charge(int e)
{
	double basePrice = 910;
	double result = 0;
	for (int i = 1; i <= e; i++)
	{
		if (i <= 200)
		{
			result += 93.3;	//e=200kwh 이하로 사용 했을 경우 93.3*200 +기본요금//
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
	return result + basePrice;  //첫 기본요금 910 을 더해주어야한다.//
}

*/










/*1번
int main() {
int x, y;
printf("가로? :");
	scanf("%d", &x);
	printf("세로? : ");
	scanf("%d", &y);
	printf("직사각형의 둘레 : %d", get_perimeter(x, y));
	printf("\n\n");
	return 0;

}
		*/
		/* 2번
		int main() {
				double l;
				printf("한 변의길이? : ");
				scanf("%lf", &l);
				printf("정사각형의 면적: %.6lf", get_area_of_square(l));
				printf("\n\n");
				return 0;

}
				*/

				/*3번
				int main() {
						int x1, y1, x2, y2;
						printf("직선의 시작점 좌표? ");
						scanf("%d %d", &x1, &y1);
						printf("직선의 끝점 좌표? ");
						scanf("%d %d", &x2, &y2);
						printf("(%d,%d)~(%d,%d) 직선의 길이: %lf",x1,y1,x2,y2, distance(x1,y1,x2,y2));
						return 0;

}
						*/

						/*4번
						int main() {
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
							return 0;

}
						*/

						/*5번
						int main() {
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
						return 0;

}
						*/

						/*6번
						int main() {
						int menu = 0;
						char file;

						while (1) {
						printf("[1. 파일 열기 2.파일 저장 3.인쇄 0.종료] 선택? ");
						scanf("%d", &menu);
						if (menu == 0)
							break;
						if(choose_menu(menu)==1);

						}
						return 0;

}
						*/

						/*7번
						int main() {
						int prime, N, count = 0;

						printf("1~N사이의 소수를 구합니다. N은? ");
						scanf("%d", &N);
						printf("\n");
						count = is_prime(N);
						printf("\n");
						printf("소수는 모두 %d개입니다.", count);
						return 0;

}
						*/

						/*8번
						int main() {
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
						return 0;

}
						*/

						/*9번
						int main() {
			char op = 0;
			double result = 0,left = 0, right = 0, sum = 0;
			while (1)
			{
				printf("수식 (0 0 0 입력 시 종료)?  ");
				scanf("%lf %c %lf", &left, &op, &right);
				if (op == '0' && left==0 && right==0) break;
				printf("%lf\n", calculator(left,op,right));
			}
			return 0;

}
			*/

			/*10번
			int main() {
			int year = 0, i=0;
			printf("2000~2100사이의 윤년\n");
			printf(" %d\n", is_leap_year(year));
			return 0;

}
			*/

			/*11번
			int main() {
			int year = 0, m = 0, d = 0;
			printf("연도? ", year);
			scanf("%d", &year);
			printf("[ %d년 ]\n", year);
			if (get_days_of_month(m, d, year) == 2)
			return 0;

}
			*/

			/*12번
			int main() {
				int year = 0, month = 0, day = 0;
				while (1)
				{
					printf("날짜 (연 월 일)? ", year, month, day);
					scanf("%d %d %d", &year, &month, &day);
					if (check_data(year, month, day) == 2) break;
					if (check_data(year, month, day) == 1)
					{
						printf("잘못 입력하셨습니다. 유효한 날짜를 입력하세요.\n");
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

/*14번
int main() {
	float x = 0, y = 0;
	while (1) {
		printf("점의 좌표 (x, y)? ",x,y);
		scanf("%f %f", &x, &y);
			if (get_quadrant(x, y) == 0) break;
	}
	return 0;

}
	*/

	/*15번
	int main() {
	int i = 0, count = 0, measure = 0, num = 0;
	srand(time(NULL));
	for (i = 0; i < 3; i++)
	{
		
		count = divisors(measure, num,i);
		printf("=> 총 %d개\n", count);
	}
	return 0;

}
*/

		/*16번
		int main() {
		int num=0,data=0,scale=0;

			if(graph(data, scale, num));

			return 0;

		}
		*/

/*17번
		int main() {
		 while (1)
		{
			int e;
			printf("월 사용량 (kWh) ? ");
			scanf("%d", &e);
			if (e == -1)
				break;
			printf("전기 요금 : %0.0lf원\n", electric_charge(e));
		}
			return 0;

		}
		*/
