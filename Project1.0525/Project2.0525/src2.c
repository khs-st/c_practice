#define _CRT_SECURE_NO_WARNINGS //include �����ٰ� �ؾ���//
#include <stdio.h>

 int main(void)
 {
	 char ch = 510000;
	 int inum = 1052;
	 double dnum = 3.1415;
	 printf("���� ch��ũ��: %d \n", sizeof(ch));
	 printf("���� inum�� ũ��: %d \n", sizeof(inum));
	 printf("���� dnum�� ũ��: %d \n", sizeof(dnum));

	 printf("char�� ũ��: %d \n", sizeof(char));
	 printf("int�� ũ��: %d \n", sizeof(int));
	 printf("long�� ũ��: %d \n", sizeof(long));
	 printf("long long�� ũ��: %d \n", sizeof(long long));
	 printf("float�� ũ��: %d \n", sizeof(float));
	 printf("double�� ũ��: %d \n", sizeof(double));
	 printf("long double�� ũ��: %d \n", sizeof(long double));



	 int num;
	 printf("���� :");
	 scanf("%d", &num);
	 printf("10���� %d = 16 ���� %x�Դϴ�.\n",num,num);
	 


	 return 0;
}
