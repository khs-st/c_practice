#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
typedef struct _cusInfo

{
	int cusNum;           //고객의 고유번호:key
	char cusName[10];      //고객 이름: value
	char regDate[10];      //고객 가입일 :value



} Cusinfo;

int main(void)
{
	Cusinfo cusInfoArr[1000];  //고객들 정보 저장위해 선언된 CusInfo 구조체 배열//

	Cusinfo ci; //CusInfo 구조체 변수 ci 선언( 고객번호와 생년월일 저장)//
	int cNum = 0; //고객 고유번호를 저장할 int 형 번수 cNum 선언//

	printf("고객 번호 입력 :");

	scanf_s("%d", &(ci.cusNum));

	getc(stdin); //입력 버퍼에 존재하는 개행 문자(\n)을 읽어 다음 scnaf 함수가 정상적으로 실행되도록 한다.//

	printf("\n고객 이름 입력 :");

	scanf_s("%c", &(ci.cusName));
	getc(stdin);
	printf("\n");
	
	printf("고객 가입일 입력 : ");

	scanf_s("%c", &(ci.regDate));

	getc(stdin);

	cusInfoArr[ci.cusNum] = ci; //단번에 저장하는거

	printf("\n확인하고 싶은 고객의 번호 입력 : ");
	scanf_s("%c", &cNum);  //scanf 함수로 정수형태(%d)로 고객 번호를 입력 받아 int형 변수 cusNum에 저장//

	printf("\n\n");

	ci = cusInfoArr[cNum];

	printf("고객 번호 : %d \n", ci.cusNum);
	printf("고객 이름 : %c \n", ci.cusName);

	printf("고객 가입일 : %c \n\n", ci.regDate);


	printf("프로그램을 종료합니다. 나가라 이제. \n");
	return 0;
}