#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS



int solution(int n) {

int arr[3000] = { 0 }; // ����� ��� �迭
int count = 0; // ����� ��� �迭�� �ε���
int sum = 0; // ����� ���� ������ ����

// �������� 0�� ����� �迭�� ��� ����
for (int i = 1; i <= n; i++) {
	if (n % i == 0) {
		arr[count] = i;
		count++;
	}
}

// �迭�� ����� ����� ���ϴ� ����
for (int i = 0; i < count; i++)
	sum += arr[i];

return sum;
}

int main() {

    int i, n, sum = 0;

    scanf_s("%d", &n);

	sum=solution(n);
    printf("%d", sum);

    return 0;
}
   