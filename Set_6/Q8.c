#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int count(char *string, char *a)
{
	int i, len, count = 0;
	
	len = strlen(string);
	for(i = 0; i< len; i++)
	{
		if(string[i] == *a)
		{
			count++;
		}
	}
	return count;
}

char* replace(char *string, char *a, char *z)
{
	int i, len, count = 0;
	len = strlen(string);
	char *replace;
	replace = (char*)malloc((len + 1)*sizeof(char));
	strcpy(replace, string);
	for(i = 0; i< len; i++)
	{
		if(string[i] == *a)
		{
			replace[i] = *z;
		}
	}
	return replace;
}

int main()
{
	char *string = "Programming in C language", *a = "a", *z = "z";
	int num;
	num = count(string, a);
	printf("%d\n", num);
	string = replace(string, a, z);
	printf("%s\n", string);
	

}
