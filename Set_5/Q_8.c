#include<stdio.h>
#include<string.h>

/*int main()
{
	char name[20], surname[20] = " ",space[1]=" ";
	printf("Enter your name!\n");
	scanf("%s",name);
	printf("Enter your surname!\n");
	scanf("%s",&surname[1]);
	strcat(name, surname);
	printf("%s\n",name);
	
	
}*/

int main()
{
	char name[100], middlename[20], surname[30], mn[2];
	printf("Enter your name!\n");
	scanf("%s",name);
	printf("Enter your middle name!\n");
	scanf("%s",middlename);
	mn[0] = middlename[0];
	printf("Enter your surname!\n");
	scanf("%s",surname);
	strcat(name, " ");
	strcat(name, mn);
	strcat(name, ". ");
	strcat(name, surname);
	printf("%s\n",name);
	
}
