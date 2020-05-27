#include <stdio.h>
#define _CRT_SECURE_NO_WARNINGS
int main(void)
{
	char op;
	int num1, num2;
	
		printf("계산하려는 수식(예:10+10)을 입력하세요 :");
		scanf("%d%c%d", &num1, &op, &num2);
		
		switch (op)
		{
			if (num1 == 0 && num2 == 0) break;
		case '+':
			printf("%d+%d=%d\n",num1,num2, num1 + num2);
			break;
		case '-':
			printf("%d-%d=%d\n", num1, num2,  num1 - num2);
			break;
		case '*':
			printf("%d*%d=%d\n", num1, num2,num1 * num2);
			break;
		case '/':
			if(num2!=0)
			printf("%d/%d=%.2f\n", num1, num2, (float)num1 / num2);
			printf("0으로 나눌 수 없다 임마.\n");
			break;

		default:
			printf("다시 입력하쇼.\n");
			break;

		}


	return 0;
}
