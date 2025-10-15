#include<stdio.h>
int f(float a);
int c(float a);

int main()
{
	float a = 55.6, b = 12.03;
	float ceil, floor;
	floor = f(a);
	ceil = c(b);
	printf("Floor of %.2f is %.1f.\n",a,floor);
	printf("Ceil of %.2f is %.1f.\n",b,ceil);
	

}
int f(float a)
{
	int j = 0;
	while(a > 0)
	{
		j+=1;
		a-=1;
	}
	return j - 1;

}
int c(float a)
{
	int j = 0;
	while(a > 0)
	{
		j+=1;
		a-=1;
	}
	return j;

}

