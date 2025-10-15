#include<stdio.h>
/*
int main()
{
	int number = 0, mod;
	if (number < 0)
		{
		  mod = -number;
		}
	else
		{
			mod = number;
		}
	printf("The mod of %d is %d.\n",number,mod);
}
*/
int main()
{
	int number = -12, mod;
	mod = (number < 0)? -number:number;
	printf("The mod of %d is %d.\n",number,mod);

}
