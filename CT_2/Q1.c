#include<stdio.h>
// First we create an array with the numbers in the Fibonnaci sequence
int main()
{
	int a = 0, b = 1, n, i,j;
	
	printf("Enter the value of n.\n");
	scanf("%d", &n);
	printf("*\n");
	char c[100] = {};
	for(i = 0; i<n-1; i++)
		{	
		c[i] = a+b;
		a = b;
		b = c[i];
		}
	for(j=0;j<n-1;j++)  // Now we just print * depending on the fibonacci number
	{
		for(i=0; i<c[j]; i++)
		{
		printf("*");
		}
		printf("\n");
	}
	
	
}
