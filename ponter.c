#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int number=50;
	int *p;
	int **p1;
	p=&number;
	p1=&p;
	printf("address of the number of the variable is %d\n",p);
	printf("address of the pointer p is %d \n",p1);
	printf("value of *p variable is %d\n",*p);
	printf("address of p2 variable is %x\n",p1);
	printf("value of **p2 variable is %d\n",**p1);
	return 0;
}
