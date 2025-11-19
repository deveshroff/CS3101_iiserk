#include<stdio.h>
#include "complex_header.h"

int main()
{
	int a[2] = {1,2}, b[2] = {3,4}, c[2]={};
	int i;
	addComplex(a, b, c);
	for(i=0; i<2; i++)
	{
		printf("%d ", c[i]);
	}
	printf("\n");

}


// to run gcc -o A3 Q3.c complex_header.h && ./A3
