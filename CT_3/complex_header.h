#include<stdio.h>

void addComplex(int *a, int *b, int *c)  //arguments are the three arrays
{
	int i;
	
	for(i=0; i<2; i++)
	{
		c[i] = a[i] + b[i];  // simple addition, c[0] is the real part, c[1] is the imaginary part
	}
	
	return ;
}

