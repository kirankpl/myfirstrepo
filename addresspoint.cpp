#include <stdio>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
char name[100];
int age;
int income;
char choice[4];
char *fn;
fn=name;
int *agepoint;
int *inpoint;
printf("Enter the value\n");
gets(name);
puts(name);
scanf("%d %d",&age,&income);
printf("the value u entered are :  %d %d",age,income);
printf("Do u want to change the record? (y/n))\n");
scanf("%s",&choice);
getchar();
if(choice[0]=='y');
{
	printf("enter the values to be changed\n");
	gets(name);
	puts(name);
	//scanf("%d\n %d\n",agepoint,inpoint);
	//printf("the value
	//e u entered are : %d %d\n",*agepoint,*inpoint);
}
	return 0;
}
