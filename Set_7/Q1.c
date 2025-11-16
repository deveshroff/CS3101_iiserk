#include<stdio.h>

void reverse(int n)
{
	if(n == 1)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", n);
		reverse(n-1);
	}
}

int main()
{
	int n = 12;
	reverse(n);
}