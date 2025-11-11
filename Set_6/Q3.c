#include<stdio.h>
#include<ctype.h>


int main()
{
	FILE *fptr, *fptr_1;
	char c, sentence[100];
	int i;
	fptr_1 = fopen("data_1.txt", "r");
	fptr = fopen("data_2.txt", "w");
	while(fgets(sentence,100,fptr_1) != NULL)
	{
		for (int i = 0; sentence[i] != '\0'; i++) 
		{
            sentence[i] = tolower(sentence[i]);
        }
		fputs(sentence,fptr);
	}
	fputs("\n",fptr);
	fclose(fptr);
	fclose(fptr_1);
	fptr = fopen("data_2.txt", "r");
	c = getc(fptr);
	while (c != EOF)
		{
			printf("%c", c);
			c = getc(fptr);
	}
	fclose(fptr);
}