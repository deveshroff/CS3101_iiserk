#include<stdio.h>

int main()
{
	char name[50] = "Devang", destination[50];
	
	printf("Enter your favourite destination.\n");
	scanf("%s", destination);
	
	printf("%s loves %s!\n", name, destination);

}
