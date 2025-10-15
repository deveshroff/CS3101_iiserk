#include<stdio.h>

int incval(int n)
{
	n++;
	return n;
}

int incref(int *n)
{
	(*n)++;
	return *n;
}

int main()
{
	int a = 5,b = 10;
	printf("Value of a is %d, and after incval is %d\n", a, incval(a));
	printf("Value of b is %d, and after incref is %d\n", b, incref(&b));
//note to self ---> shit is happening right to left, that is why initial b is also being printed as 11
}
