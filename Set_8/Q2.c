#include<stdio.h>

void equi_index(int *a, int len)
{	int sum_l = 0, sum_h = 0, t_sum = 0, i;
	
	for(i = 0; i<len; i++)
	{
		t_sum += a[i];
	}

	for(i = 0; i<len; i++)
	{
		sum_h = t_sum - sum_l - a[i];

		if(sum_l == sum_h && i != len - 1)
		{
			printf("Found at %d\n", i);
		}

		sum_l += a[i];
	}

		
		
}

int main()
{
	int a[] = {-7, 2,3, 1,3, 2,-7};
	int len = sizeof(a)/sizeof(int), i;
	equi_index(a, len);
}
