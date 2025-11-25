#include<stdio.h>
#include<math.h>
#include<stdlib.h>

float max_num( float a, float b)
{
	return (a + b + fabs( a - b))/2.0;
}

int main()
{
	float a = -10.8, b = -12.1;

	printf("%.2f\n", max_num(a,b));
}