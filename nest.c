#include <stdio.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
struct employee
{
	int  id;
	char name[30];
	struct Date
	{
		int dd;
		int mm;
		int yyyy;
	}doj;
	
}e1;	

int main(int argc, char *argv[]) {
	e1.id=101;
	strcpy(e1.name,"moni");
	e1.doj.dd=10;
	e1.doj.mm=11;
	e1.doj.yyyy=2018;
	
	printf("employee id : %d\n",e1.id);
	printf("employee name: %s\n",e1.name);
	printf("employee date of joining(dd/mm/yyyy) : %d\t %d\t %d\n",e1.doj.dd,e1.doj.mm,e1.doj.yyyy);
	return 0;
}
