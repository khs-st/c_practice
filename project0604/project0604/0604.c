#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#define _CRT_SECURE_NO_WARNINGS



int solution(int n) {

int arr[3000] = { 0 }; // 약수를 담는 배열
int count = 0; // 약수를 담는 배열의 인덱스
int sum = 0; // 약수의 합을 저장할 변수

// 나머지가 0인 약수를 배열에 담는 동작
for (int i = 1; i <= n; i++) {
	if (n % i == 0) {
		arr[count] = i;
		count++;
	}
}

// 배열에 저장된 약수를 더하는 동작
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
   