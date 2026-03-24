#include <stdio.h>
#include <string.h> //strlen 함수를 위해 필요
#define _CRT_SECURE_NO_WARNINGS //scanf_s 대신 scanf 사용하기 위해 필요 -> 문제 해결이 안되서 그냥 printf 사용함

int main() {
	char text[100] = { 0 };
	int length;

	printf("문자열을 입력하세요 : ");
	scanf("%s", text);
	length = strlen(text);

	printf("입력된 문자열은\n\"%s\"\n입니다.\n", text);

	printf("입력된 문자열의 길이 = %d\n", length);

	return 0;
}