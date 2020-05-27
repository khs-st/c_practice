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
	//printf 함수로 인해 ABC로 출력되며 ABC\n ABC띄우기 라는 4글자를 반환하여 c=4로 출력
	return 0;


}