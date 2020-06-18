#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
#include<ctype.h>

int main() {
	int i = 0;
	char(*p)[30] = NULL;
	char books[5][30] = {
		"korea b&c",
		"jetae ma",
		"antrogen",
		"harrypoter",
		"call of duty: warzone",
	};
	//char*p = books;


	for (i = 0; i < 5; i++) {
		printf("주식 이름: %s\n", books[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))
		{
			books[i][0] = toupper(books[i][0]);
			//9번째줄에 나와 있는 구문으로  포인터를 space칸으로 바꾸고 빈칸의 뒤에 문자를 대문자로 바꾼다.//
			//그 후에 포인터를 다음 문자로 이동시키는 p=(p[0]+1);구문으로 이동시켜 포인터가 움직일 수 있도록 해놓고 포인터가 널값이 되면 종료되도록 while문을 사용하여 실행했다.//
			p = books[i];
		}
		while (strchr(p, ' ') != NULL)
		{
			p = strchr(p, ' ');
			if (islower(*(p[0] + 1)))
				*(p[0] + 1) = toupper(*(p[0] + 1));
			p = (p[0] + 1);
		}

	}
	puts("<< 변경 후 >>");
	for (i = 0; i < 5; i++) {
		printf("주식 이름: %s\n", books[i]);
	}
	//puts("<< 특정 글자만 대문자로 변경 >>");
	///*for (i = 0; i < 5; i++) {
	//	strcpy(p, books[i]);
	//	if (islower(p[0])) {
	//		p[0] = toupper(p[0]);
	//		p[0] = strchr(p, ' ');
	//	}
	//	if (islower(p[2])) {
	//		p[2] = toupper(p[2]);
	//		printf("주식 이름: ");
	//		puts(books);
	//	}
	//}*/
	return 0;

}