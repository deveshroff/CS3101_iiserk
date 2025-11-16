#include<stdio.h>

void forward(int j, int n)
{	
	if(j == n)
	{
		printf("%d\n", n);
	}
	else
	{
		printf("%d\n", j);
		forward(j+1, n);
	}
}

int main()
{
	int n = 12;
	forward(1,n);
}