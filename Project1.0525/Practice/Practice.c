#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct _cusInfo

{
	int cusNum;           //���� ������ȣ:key
	char cusName[10];      //�� �̸�: value
	char regDate[10];      //�� ������ :value



} Cusinfo;

int main(void)
{
	Cusinfo cusInfoArr[1000];  //���� ���� �������� ����� CusInfo ����ü �迭//

	Cusinfo ci; //CusInfo ����ü ���� ci ����( ����ȣ�� ������� ����)//
	int cNum = 0; //�� ������ȣ�� ������ int �� ���� cNum ����//

	printf("�� ��ȣ �Է� :");

	scanf_s("%d", &(ci.cusNum));

	getc(stdin); //�Է� ���ۿ� �����ϴ� ���� ����(\n)�� �о� ���� scnaf �Լ��� ���������� ����ǵ��� �Ѵ�.//

	printf("\n�� �̸� �Է� :");

	scanf_s("%c", &(ci.cusName));
	getc(stdin);
	printf("\n");
	
	printf("�� ������ �Է� : ");

	scanf_s("%c", &(ci.regDate));

	getc(stdin);

	cusInfoArr[ci.cusNum] = ci; //�ܹ��� �����ϴ°�

	printf("\nȮ���ϰ� ���� ���� ��ȣ �Է� : ");
	scanf_s("%c", &cNum);  //scanf �Լ��� ��������(%d)�� �� ��ȣ�� �Է� �޾� int�� ���� cusNum�� ����//

	printf("\n\n");

	ci = cusInfoArr[cNum];

	printf("�� ��ȣ : %d \n", ci.cusNum);
	printf("�� �̸� : %c \n", ci.cusName);

	printf("�� ������ : %c \n\n", ci.regDate);


	printf("���α׷��� �����մϴ�. ������ ����. \n");
	return 0;
}