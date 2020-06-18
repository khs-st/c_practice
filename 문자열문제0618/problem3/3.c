#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int main() {
	char str[120] = "";
	int i;
	printf("¹®ÀÚ¿­? ");
	gets_s(str, sizeof(str));
	for (i = 0; str[i] != 0; i++) {
		if (islower(str[i])) {
			str[i] = toupper(str[i]);
		}
		if (toupper(str[i])) {
			str[i] = islower(str[i]);
		}

		puts(str);

	return 0;
}