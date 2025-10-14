#include<stdio.h>

float calculate(float p,float i,float r){
	float si;
	si = p*i*r/100.;
	return si;
}
int main()
{
	float p,i,r,amount,si;
	printf("Enter principal amount (P), time (T), and rate of interest (R),\n");
	scanf("%f,%f,%f",&p,&i,&r);
	si = calculate(p,i,r);
	amount = si+p;
	printf("The simple interest is %f, and the amount is %f.\n",si,amount);
}
