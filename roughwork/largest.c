#include<stdio.h>

int largest(int a, int b, int c);
int main()
{
	int a,b,c, large;
	printf("Enter Three Integers Good Sir!\n");
	scanf("%d %d %d", &a, &b, &c);
	large = largest(a,b,c);
	printf("The largest of the three numbers is %d.\n",large);
}
int largest(int a,int b,int c)
{
	int d = a;
	
	if (b > a)
	{
		d = b;
	}
	if (c > a)
	{
		d = c;
	
	}
	return d;
}