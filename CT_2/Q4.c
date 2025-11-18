#include<stdio.h>
#include<string.h>


void pattern(char *name)
{	
	int len = strlen(name), low, high, i;
	if(len % 2 != 0)
	{
		for(low = len/2, high = len/2 + 1; 0<=low, high<=len; low--, high++)
		{
			for(i = low; i < high; i++)
			{
				printf("%c", name[i]);
			}
			printf("\n");
		}
		for(low = low + 2, high = high - 2 ; low<len/2, len/2 <high; low++, high--)
		{
			for(i = low; i < high; i++)
			{
				printf("%c", name[i]);
			}
			printf("\n");
		}
	}
}

int main()
{
	char name[50];
	printf("Enter your name good sir!\n");
	scanf("%s", name);
	pattern(name);

}