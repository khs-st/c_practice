#include <stdio.h>
int main()
{
	int a = 0;
	double b = 0;
	int c = 0;

	a = 123;
	printf("a=%d\n", a);
	printf("a=%d\n", a = 456);
	printf("b=%f\n", b = a + 0.5);
	printf("c=%d\n", c = printf("ABC\n"));
	//printf �Լ��� ���� ABC�� ��µǸ� ABC\n ABC���� ��� 4���ڸ� ��ȯ�Ͽ� c=4�� ���
	return 0;


}