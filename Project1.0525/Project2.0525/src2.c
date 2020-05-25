#define _CRT_SECURE_NO_WARNINGS //include 위에다가 해야함//
#include <stdio.h>

 int main(void)
 {
	 char ch = 510000;
	 int inum = 1052;
	 double dnum = 3.1415;
	 printf("변수 ch의크기: %d \n", sizeof(ch));
	 printf("변수 inum의 크기: %d \n", sizeof(inum));
	 printf("변수 dnum의 크기: %d \n", sizeof(dnum));

	 printf("char의 크기: %d \n", sizeof(char));
	 printf("int의 크기: %d \n", sizeof(int));
	 printf("long의 크기: %d \n", sizeof(long));
	 printf("long long의 크기: %d \n", sizeof(long long));
	 printf("float의 크기: %d \n", sizeof(float));
	 printf("double의 크기: %d \n", sizeof(double));
	 printf("long double의 크기: %d \n", sizeof(long double));



	 int num;
	 printf("정수 :");
	 scanf("%d", &num);
	 printf("10진수 %d = 16 진수 %x입니다.\n",num,num);
	 


	 return 0;
}
