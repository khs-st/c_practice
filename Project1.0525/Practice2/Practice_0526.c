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

	struct customer*p; //������
	int i;
	int max = 0; //0����
	

	for (i = 0; i < SIZE; i++)//�� ��� 
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

	printf("�̸�    ����  ����  ������\n");
	printf("==========================\n");
	for (i = 0; i < SIZE; i++)
	{
		printf("%s    %s    %d    %s\n", list[i].name, list[i].gender, list[i].age, list[i].address);

		if (max < list[i].age)//max�� age���� Ŭ�� (SIZEũ�� ��ŭ �ݺ��ؼ� ū�� ã�Ƴ�)
		{
			max = list[i].age;
			
			p = &list[i]; //������ ����
		}
	}
	printf("**************************\n");
	printf("           �ְ��             \n");
	printf("%s    %s    %d    %s\n",  (*p).name, (*p).gender, max, (*p).address); //�����ͷ� �ϰ� %d�� max

	return 0;
}
