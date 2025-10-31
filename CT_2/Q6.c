#include<stdio.h>
#include<math.h>


int spynumber(int n)
{
	int i, array[10] ={}, sum = 0, prod = 1;

	while(n>0)
	{
		sum += n % 10;
		prod *= n % 10;
		n = n / 10;
	}
	if(sum == prod)
	{
		return 0;
	}
	else 
	{
		return 1;
	}

}

int main()
{
	int n = 1104;
	printf("%d\n", spynumber(n));
}