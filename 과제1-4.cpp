#include <stdio.h>
#include <string.h>
#define _CRT_SECURE_NO_WARNINGS
int main() {

	char c[2][3][20] = {};
	char n[3][20] = { "이름", "학과", "학번" };

	for (int i = 0; i < 2; i++) {
		for (int j = 0; j < 3; j++) {
			for (int k = 0; k < 1; k++) {
				printf("학생 %d의 %s: ", i + 1, n[j]);
				gets_s(c[i][j], sizeof(c[i][j]));
			}
		}
		printf("\n");
	}

	for (int i = 0; i < 2; i++) {
		printf("학생 %d\n", i + 1);
		for (int j = 0; j < 3; j++) {
			printf("	%s\n", c[i][j]);
		}
		printf("\n");
	}
}