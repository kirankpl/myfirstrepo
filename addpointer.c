#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int add(int *a,int *b)
{
	int total;
	total=*a+*b;
	return total;
}

int main(int argc, char *argv[]) {
	int a,b,sum;
	int *p1;
	int *p2;
	printf("enter the values of a and b\n");
	scanf("%d %d",&a,&b);
	p1=&a;
	p2=&b;
	sum=add(p1,p2);
	//sum=*p1+*p2;
	printf("the sum is %d\n",sum);
	return 0;
}
