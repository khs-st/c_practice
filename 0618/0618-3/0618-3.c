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
		printf("�ֽ� �̸�: %s\n", books[i]);
	}
	for (i = 0; i < 5; i++)
	{
		if (islower(books[i][0]))
		{
			books[i][0] = toupper(books[i][0]);
			//9��°�ٿ� ���� �ִ� ��������  �����͸� spaceĭ���� �ٲٰ� ��ĭ�� �ڿ� ���ڸ� �빮�ڷ� �ٲ۴�.//
			//�� �Ŀ� �����͸� ���� ���ڷ� �̵���Ű�� p=(p[0]+1);�������� �̵����� �����Ͱ� ������ �� �ֵ��� �س��� �����Ͱ� �ΰ��� �Ǹ� ����ǵ��� while���� ����Ͽ� �����ߴ�.//
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
	puts("<< ���� �� >>");
	for (i = 0; i < 5; i++) {
		printf("�ֽ� �̸�: %s\n", books[i]);
	}
	//puts("<< Ư�� ���ڸ� �빮�ڷ� ���� >>");
	///*for (i = 0; i < 5; i++) {
	//	strcpy(p, books[i]);
	//	if (islower(p[0])) {
	//		p[0] = toupper(p[0]);
	//		p[0] = strchr(p, ' ');
	//	}
	//	if (islower(p[2])) {
	//		p[2] = toupper(p[2]);
	//		printf("�ֽ� �̸�: ");
	//		puts(books);
	//	}
	//}*/
	return 0;

}