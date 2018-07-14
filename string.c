#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char name[50];
	printf("enter the name\n");
	gets(name);
	printf("your name is\n");
	puts(name);
	return 0;
}
