#include <stdio.h>


/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	char fullname[100];
	int age;
	int income;
	char choice[4];
	char *fn;
	int *agepoint;
	int *inpoint;
	fn=fullname;
	agepoint=&age;
	inpoint=&income;
	printf("enter the values : \n");
	scanf("%s\n %d %d",&fullname,&age,&income);
	printf("the names u have entered are \n %s \n %d\n %d\n",fullname,age,income);
	printf("Do u want to change the record ? (y/n))\n");
	scanf("%s",&choice);
	if(choice[0]=='y')
	{
		printf("enter the values u want to change\n");
		scanf("%s %d %d",fn,agepoint,inpoint);
		printf("the names u have entered are \n %s \n, %d\n ,%d\n ",fn,*agepoint,*inpoint);
	}
	else
	printf("\nno change\n");
}
