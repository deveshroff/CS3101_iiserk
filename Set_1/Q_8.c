#include<stdio.h>
char my_name[20] = "Devang";
int my_age = 20;
int main()
{
	char user_name[50];
	int user_age;
	printf("Enter your name and age kind sir!.\n");
	scanf("%s %d",user_name,&user_age);
	printf("Hello %s, you are %d years old. I am %s, I am %d years old.\n",user_name,user_age,my_name,my_age);

}
