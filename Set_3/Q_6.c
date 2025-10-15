#include<stdio.h>
int main()
{
	char answer;
	printf("The day before two days after the day before tomorrow is Saturday. What day is it today?\n a) Sunday, b) Monday c) Friday d) Thursday\n");
	scanf("%c",&answer);
	switch(answer)
	{
	case 'c': printf("That's Correct!\n");
			break;
	case 'a': ;
	case 'b': ;
	case 'd': printf("That's Inorrect!\n");
			 break;
	default : printf("That's an invalid answer!\n");
	}		


}
