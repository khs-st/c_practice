#include <stdio.h>
int main(void)
{
	int x = 0, y = 0;
	printf("�� ���� ������ �Է��ϼ��� : ");
	scanf_s("%d %d", &x, &y);


	printf("+%d=%d\n", x, +x);
	printf("-%d=%d\n", y, -y);
	printf("%d +%d=%d\n", x, y, x + y);
	printf("%d-%d=%d\n", x, y, x - y);
	printf("%d * %d=%d\n", x, y, x * y);
	printf("%d/%d=%d\n", x, y, x / y);
	printf("%d %% %d=%d\n", x, y, x % y);


	int index1=0, index2=0;
	int current1, current2;
	float x1 = 0.5F, x2 = 0.5F;
	float y1, y2;

	current1 = index1++;
	printf("index1=%d, current1=%d\n", index1, current1);

	current2 = ++index2;
	printf("index2=%d, current2=%d\n", index2, current2);

	y1 = x1++;
	printf("x1=%.2f, y1=%.3f\n", x1, y1);

	y2 = ++x2;
	printf("x2=%.2f, y2=%.3f\n", x2, y2);







	int items = 0;
	int pages = 0;
	int items_per_page = 0;

	printf("�׸��? ");
	scanf_s("%d", &items);

	printf("�� ������ �� �׸��? ");
	scanf_s("%d", &items_per_page);
	pages = items / items_per_page;
	items %= items_per_page;
	printf("%d �������� %d �׸�\n", pages, items);

	return 0;
}