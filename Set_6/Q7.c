#include<stdio.h>

int main()
{
	int a,b,c, *p, *q, *r, sum, prod;
	
	printf("Enter three integers!\n");
	scanf("%d %d %d", &a, &b, &c);
	
	p = &a;
	q = &b;
	r = &c;
	sum = (*p) + (*q) + (*r);
	prod = (*p)*(*q)*(*r);
	
	printf("The sum of %d %d and %d is %d \n", a,b,c,sum);
	printf("The product of %d %d and %d is %d \n", a,b,c,prod);
	

}
