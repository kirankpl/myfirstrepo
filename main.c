#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int *ptr=(int*)calloc(10,sizeof(int));
	if(ptr=NULL)
	{
		printf("could not allocate");
	exit(-1);
	}
	else
	printf("mem succesful");
	return 0;
}
