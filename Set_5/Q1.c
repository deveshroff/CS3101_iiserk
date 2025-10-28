#include<stdio.h>

int maxint2(int a, int b)
{
	if(a - b > 0)
	{
	return a;
	}
	else
	{
	return b;
	}
}

int minint2(int a, int b)
{
	if(a - b > 0)
	{
	return b;
	}
	else
	{
	return a;
	}
}
int minint3(int n, int m, int b)
{	int a, c;
	a = minint2(n,m);
	c = minint2(a,b);
	return c;
}

int maxint3(int n, int m, int b)
{	int a, c;
	a = maxint2(n,m);
	c = maxint2(a,b);
	return c;
}
int main()
{
	int n,m,k;
	printf("Give me 3 integers good sir!\n");
	scanf("%d %d %d", &n,&m,&k);
	printf("The maximum of %d, %d and %d is %d\n", n, m, k, maxint3(n,m,k));
	printf("The minimum of %d, %d and %d is %d\n", n, m, k, minint3(n,m,k));

}
