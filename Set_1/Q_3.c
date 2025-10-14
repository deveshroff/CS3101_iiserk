#include<stdio.h>

int main()
{
	float a,b,c;
	printf("Enter two numbers.\n");
	scanf("%f,%f",&a,&b);
	printf("Before swap a = %f, and b = %f.\n",a,b);
	c = a;
	a = b;
	b = c;
	printf("After swap a = %f, and b = %f.\n", a, b);
}
