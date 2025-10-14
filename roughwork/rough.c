//10-10-25 User Functions and Pointers
#include<stdio.h>
#include<math.h>

int factorial(int n)
{
	int i, fact = 1;
		if(n==0)
		{
			return 1;
		}
		else
		{
		for(i = 1; i<=n; i++)
		{
			fact = i*fact;
		}
		return fact;
		}
}
float nCr(int n, int r)
{
	float comb;
	comb =  factorial(n)/(1.0*factorial(r)*factorial(n-r));
	return comb;
}

int binomial_expansion(int a, int b, int n){
	int i;
	float sum = 0;
	for(i=0; i<= n; i++)
		{
			sum+= nCr(n,i)*pow(a,i)*pow(b,n-i);
		}
		return sum;
}
int main()
{	int a = 25, *p, t; 
	p = &a;
	t = p;
	//a = binomial_expansion(20,5,2);
	printf("%p\n", t);
}
