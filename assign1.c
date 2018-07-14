#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct employee
{
	int id;
	char name[30];
	int age;
};

struct finance
{
	int salary;
	float tax;
	float ctc;
};

float taxation(int salary)
{
	float tax;
	if(salary<=500000)
	{
		tax=salary;
	}
	else if(salary>500000 && salary<=100000)
	{
		tax=salary*(.10);
	}
	else if(salary>1000000 && salary<=2000000)
	{
		tax=salary*(.20);
	}
	else
	{
		tax=salary*(.30);
	}
	return tax;
}
int main(int argc, char *argv[]) {
	int n=0,i;
	char choice[3];
	printf("enter the number of employees\n");
	scanf("%d",&n);
	struct employee E[n];
	struct finance F[n];
	int emp;

	printf("enter the details of the employee\n");
	for(i=0;i<n;i++)
	{
		//E[i].id=i;
		printf("the name and age of employee %d\n",i);
		scanf("%s %d",E[i].name,&E[i].age);
	}
	printf("Do you want to enter the financial details for employee(y/n)?\n");
	scanf("%s",&choice);
	if(choice[0]=='y')
	{
		for(i=0;i<n;i++)
		{
			printf("enter the salary\n");
			scanf("%d",&(F[i].salary));
			F[i].tax=taxation(F[i].salary);
			F[i].ctc=F[i].salary-F[i].tax;
		}
	}
	printf("Enter the id of the employee whose details u want to see!\n");
	scanf("%d",&emp);
	printf("the name of the employee is %s\n and his age is %d\n his financial details\n salary is %d\n tax: %f\n ctc : %f\n",E[emp].name,E[emp].age,F[emp].salary,F[emp].tax,F[emp].ctc);
	return 0;
}
