#include<stdio.h>
int main()
{
	float b,h,ar;
	printf("Enter base and height:\n");
	scanf("%f,%f",&b,&h);
	ar = 0.5*(b)*(h);
	printf("The area of given triangle is %.2f.\n",ar);
}
