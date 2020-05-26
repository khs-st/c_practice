#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#define SIZE 2

struct customer
{
	char name[30];
	char gender[30];
	int age;
	char address[30];
};
	
main()
{
	struct customer list[SIZE];

	struct customer*p; //포인터
	int i;
	int max = 0; //0으로
	

	for (i = 0; i < SIZE; i++)//입 출력 
	{
		printf("NAME  ");
		scanf("%s", list[i].name);
		printf("GENDER  ");
		scanf("%s", list[i].gender);
		printf("AGE  ");
		scanf("%d", &list[i].age);
		printf("ADDRESS  ");
		scanf("%s", list[i].address);
	}

	printf("이름    성별  나이  거주지\n");
	printf("==========================\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%s    %s    %d    %s\n", list[i].name, list[i].gender, list[i].age, list[i].address);

		if (max < list[i].age)//max가 age보다 클때 (SIZE크기 만큼 반복해서 큰걸 찾아냄)
		{
			max = list[i].age;
			
			p = &list[i]; //포인터 설정
		}
	}
	printf("**************************\n");
	printf("           최고령             \n");
	printf("%s    %s    %d    %s\n",  (*p).name, (*p).gender, max, (*p).address); //포인터로 하고 %d는 max

	return 0;
}
