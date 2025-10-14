#include<stdio.h>
int main()
{
	float a,b;
	printf("Enter two numbers to swap:\n");
	scanf("%f,%f",&a,&b);
	printf("Before swap a = %.2f, and b = %.2f.\n",a,b);
	a = a*b;
	b = a/b;
	a = a/b;
	printf("After swap a = %.2f, and b = %.2f.\n",a,b);
}
