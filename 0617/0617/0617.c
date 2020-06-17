#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>




int max_gong_min_gong(int x, int y, int* max, int* min) {
	int i, j;
	j = (x < y) ? x : y; //최대공약수
	for (i = 1; i <= j; i++)
	{
		if (x % i == 0 && y % i == 0)
		{
			*max = i;
		}
	}
	j = (x > y) ? x : y; //c
	for (i = j; ; i++) 
	{
		if (i % x == 0 && i % y == 0) 
		{
			*min = i;
			break;
		}
	}

}




int main() {

	int a, b, max_gong, min_gong;
	printf("첫 번째 정수:");
	scanf("%d", &a);
	printf("\n두 번째 정수:");
	scanf("%d", &b);
	max_gong_min_gong(a, b, &max_gong, &min_gong);
	printf("%d와 %d의 최대공약수: %d, 최소공배수: %d", a, b, max_gong, min_gong);
	return 0;
}