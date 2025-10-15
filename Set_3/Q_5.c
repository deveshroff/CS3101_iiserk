#include<stdio.h>

int main()
{
	int roll;
	char gender;
	printf("Enter your gender and roll no!\n");
	scanf("%c %d",&gender,&roll);
	if (gender == 'F')
	{
		if(roll <26)
		{
		printf("Your team is Mary Kom Smashers!\n");
		}
		else if(roll <50)
		{
		printf("Your team is Smriti Mandana Dashers!\n");
		}
		else
		{
		printf("Your team is Manu Bhaker Snipers!\n");
		}
	}
	else
	{
		if(roll <21)
		{
		printf("Your team is Virat Kohli Challengers!\n");
		}
		else if(roll < 40)
		{
		printf("Your team is R Praggnanandhaa Combaters!\n");
		}
		else
		{
		printf("Your team is Neeraj Chopra Warriors! \n");
		}
	}
}
