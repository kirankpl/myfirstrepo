#include<stdio.h>

void main()
{
	FILE *fp;
	char buff[255];
	fp=fopen("C:/Users/User/Documents/tt.log","r");
	fscanf(fp,"%s",buff);
	printf("\nng%s",buff);
	
		fgets(buff,255,(FILE*)fp);
	printf("\nteing%s",buff);
	
		fgets(buff,255,(FILE*)fp);
	printf("\nting%s",buff);

	fclose(fp);
}
