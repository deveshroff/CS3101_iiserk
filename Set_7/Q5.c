#include<stdio.h>

void reverse_pattern(int n)
{ int i;
	if(n == 1)
	{
		printf("%d\n", n);
	}
	else
	{
		for(i =1;i<=n;i++)
		{
			printf("%d", i);
		}
		printf("\n");
		reverse_pattern(n-1);
	}
}
void forward_pattern(int j,int n)
{	int i;
	if(j == n)
	{
		for(i =1;i<=n;i++)
		{
			printf("%d", i);
		}
		printf("\n");
	}
	else
	{
		for(i =1;i<=j;i++)
		{
			printf("%d", i);
		}
		printf("\n");
		forward_pattern(j+1,n);
	}
}

int main()
{
	int n = 4;
	forward_pattern(1,n);
	reverse_pattern(n);
}