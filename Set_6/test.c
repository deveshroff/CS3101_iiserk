#include<stdio.h>
#include<ctype.h>


int main()
{
	char c, sentence[100] = "MY NAME IS DEVANG";
	FILE *fptr;
	int i = 0;
	fptr = fopen("test_1.txt", "w");
	c = sentence[i++];
	while(c != '\0')
	{
		putc(c, fptr);
		c = sentence[i++];
	}
	fclose(fptr);

	fptr = fopen("test_1.txt", "r");
	c = getc(fptr);
	while(c != EOF)
	{
		printf("%c", c);
		c = getc(fptr);
	}
	fclose(fptr);
}