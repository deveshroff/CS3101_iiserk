#include<stdio.h>
#include<string.h>
#include<stdlib.h>


void F_2(char *string, char *key)
{
	char zero = '0';
	int len, ascii = zero;
	len = strlen(string);
	ascii += len;
	//key = (char*)malloc((3)*sizeof(char));
	key[0] = string[0];
	key[1] = string[len - 1];
	key[2] = (char)(ascii);
	//key[3] = '\0';
	//return key;
	

}
char* F(char *string)
{
	char *key, zero = '0';
	int len, ascii = zero;
	len = strlen(string);
	ascii += len;
	key = (char*)malloc((3)*sizeof(char));
	key[0] = string[0];
	key[1] = string[len - 1];
	key[2] = (char)(ascii);
	key[3] = '\0';
	return key;
	

}

int main()
{
	char *name = "James";
	char key[10];
	F_2(name, key);
	printf("%s\n", key);

}
