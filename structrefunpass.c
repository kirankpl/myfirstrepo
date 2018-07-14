#include <stdio.h>
#include <string.h>

struct Books{
	char title[50];
	char author[50];
	char subject[100];
	int book_id;
};

void printBook(struct Books book);

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	struct Books book1;
	struct Books book2;
	
	strcpy(book1.title,"c program");
	strcpy(book1.author,"Neha ali");
	strcpy(book1.subject,"c programing tutorial");
	book1.book_id=697846;
	
	strcpy(book2.title,"telecom billing");
	strcpy(book2.author,"Zara ali");
	strcpy(book2.subject,"telecom billing tutorial");
	book2.book_id=409678;
	
	printBook(book1);
	printBook(book2);
	return 0;
	
}

void printBook(struct Books book){
	printf("book title : %s\n",book.title);
	printf("book author : %s\n",book.author);
	printf("book subject : %s\n",book.subject);
	printf("book book_id : %d\n",book.book_id);
	
}


