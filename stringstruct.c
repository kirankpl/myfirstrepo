#include <stdio.h>
#include <stdlib.h>
#include<string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct employee
{
	int id;
	char *name;
}e1;

int main(int argc, char *argv[]) {
	
	e1.id=101;
	e1.name="hello";
	printf("employee1 i:%d\n",e1.id);
	printf("emplyee1 .name:%s\n",e1.name);
	return 0;
	
}
