#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>
//0619 구조체

struct first
{
	int id;
	char name[20];
};

typedef struct _Car {
	char name[20];
	int number;
} Car;



int main() {

	struct first p1;
	Car c1;
	strcpy(p1.name, "student");
	//p1.name="student"
	p1.id = 20200619;
	c1.number = 2020;
	printf("이름: %s\n", p1.name);
	printf("학번: %d\n", p1.id);

	strcpy(c1.name, "아반떼 2020 신형");

	printf("차 이름: %s\n", c1.name);
	printf("차 번호: %d\n", c1.number);







	return 0;
}