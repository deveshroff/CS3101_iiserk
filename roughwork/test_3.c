#include<stdio.h>
#include<stdlib.h>
#include<string.h>


typedef struct book{
	char title[50];
	char id[10];
	int no;
}BOOK;


int main()
{
	BOOK book_1 = {"Let us C", "B123", 5}, book_2 = {"Algorithm", "A256", 12}, book, books[2];
	books[0] = book_1;
	books[1] = book_2;	
	FILE *fptr;
	fptr = fopen("book.txt", "w+");

	
	fwrite(&book_1, sizeof(BOOK),1,fptr);
	fwrite(&book_2, sizeof(BOOK),1,fptr);
	rewind(fptr);

	while(fread(&book, sizeof(BOOK),1,fptr))
	{
		printf("%ld\n", ftell(fptr));
		printf("%s\n", book.title);
		printf("%s\n", book.id);
		printf("%d\n", book.no);
	}

	fclose(fptr);
	return 0;
}