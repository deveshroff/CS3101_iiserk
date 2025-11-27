#include<stdio.h>

int main()
{
	int a, b, max;
	printf("Enter two numbers.\n");
	scanf("%d %d", &a, &b);
	
	max = (a>b)? a:b ; //Used the conditional operator.
	
	printf("The maximum of %d and %d is %d.\n", a, b, max);
}
