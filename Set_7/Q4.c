#include<stdio.h>


int sum_divisor(int i, int n)
{
	if(i == 1 || i == 0)
	{
		return i;
	}
	else if(n % i == 0)
	{	
		return i + sum_divisor(i - 1, n);
	}
	else
	{
		return sum_divisor(i - 1, n);
	}
}
void perfect(int n)
{ 
	if(n == sum_divisor(n-1,n))
	{
		printf("%d is a Perfect Number!\n", n);
	}
	else
	{
		printf("%d is not a Perfect Number!\n", n);
	}
}
int main()
{
	int n;
	printf("Enter a number\n");
	scanf("%d", &n);
	perfect(n);
}