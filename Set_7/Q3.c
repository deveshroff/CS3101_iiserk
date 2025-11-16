#include<stdio.h>

int sum(int sum_num, int n)
{ 
	if(n == 1)
	{
		sum_num += n;
	}
	else
	{

		return n + sum(sum_num, n-1);
	}
}

int main()
{
	int n = 12;
	printf("%d\n",sum(0,n));
}