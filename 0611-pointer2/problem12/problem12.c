#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#define SIZE 10


find_all_in_array(int arr[], int key, int index[], int count) {
	int i = 0;
	for (i = 0; i < SIZE; i++) {
		if (arr[i] == key)
		{
			index[count] = i;
			count++;
		}
		
	}
	return count;
}





int main() {
	int i = 0, key = 0, count = 0;
	int arr[SIZE] = { 13,1,2,13,4,5,6,7,13,13 };
	int index[SIZE] = { 0 };
	for (i = 0; i < SIZE; i++) {
		printf("%d  ", arr[i]);
	}
	printf("\n\n");
	printf("찾을 값? ");
	scanf("%d", &key);
	count = find_all_in_array(arr, key, index, count);
	printf("찾은 항목은 모두 %d개입니다.", count);
	printf("\n찾은 항목의 인덱스: ");
	for (i = 0; i < count; i++) {
		printf("%d ", index[i]);
	}
	if (count==0) {
		return 0;
	}
	return 0;
}