#include<stdio.h>

int recur_max(int *a, int len)
{
	int max;	
	if(len == 1)
	{
		return a[0];
	}

	max = recur_max(a + 1, len -1);
	
	if(a[0] > max)
	{
		return a[0];
	}
	else
	{
		return max;
	}
} 


int main()
{
	int a[] = {-7, 1, 5, 1, 2, 1, -4, 3, 0};
	int len = sizeof(a)/sizeof(int), i;
	printf("%d\n", recur_max(a, len));
}