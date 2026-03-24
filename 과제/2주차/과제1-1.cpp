#include <stdio.h>

int main() {
	const char *ptr1[4] = {"Korea", "Seoul", "Mapo", "152번지 2/3"};

	printf("%s\n%s\n%s\n%s\n\n", ptr1[0], ptr1[1], ptr1[2], ptr1[3]);

	const char* ptr2[4] = { "Korea", "Seoul", "Jongno", "152번지 2/3" };
	printf("%s\n%s\n%s\n%s\n", ptr2[0], ptr2[1], ptr2[2], ptr2[3]);
	
	return 0;
}