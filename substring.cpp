#include <iostream>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	//printf("enter the number of employees \n");
	char str[100]="this is with c and java\n";
	char*sub;
	sub=strstr(str,"java");
	printf("\nsubstring is :%s",sub);
	return 0;
}
