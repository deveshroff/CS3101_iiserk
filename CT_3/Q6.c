#include<stdio.h>
#include "complex_header.h"

int main()
{
	int a[2] = {1,2}, b[2] = {3,4}, dot;
	int i;
	dot = dotComplex(a, b);
	printf("%d\n", dot);

}