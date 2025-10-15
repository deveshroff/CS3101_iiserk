#include<stdio.h>
int main()
{
	int a = 12, b = 15, c = 14, max, max_s;
	if (a > b && a > c)
	{
		max = a;
		if(b > c)
		{
			max_s = b;
		}
		else
		{
			max_s = c;
		}	
	}
	if (b > a && b > c)
	{
		max = b;
		if(a > c)
		{
			max_s = a;
		}
		else
		{
			max_s = c;
		}	
	}
	if (c > b && c > b)
	{
		max = c;
		if(b > a)
		{
			max_s = b;
		}
		else
		{
			max_s = a;
		}	
	}
	
	printf("The maximum of %d, %d, %d is %d, and second maximum is %d.\n", a,b,c,max, max_s);
}
