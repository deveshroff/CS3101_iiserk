#include<stdio.h>
#include<stdlib.h>

void sorting(int *a, int len, int k)
{	int *count, i,j;
	
	count = (int*)calloc(k+1,sizeof(int));
	for(i = 0; i < len; i++)
	{
		count[a[i]] += 1;
	}
	i = 0;
	for(j = 0; j <= k; j++)
	{
		while(count[j] > 0)
			{
				a[i++] = j;
				count[j] -= 1;
			}
	}
	

}

int main()
{
	int a[] = {0,1,9,1,2,8,11,8,3,4,5,5,10,5,7};
	int len = sizeof(a)/sizeof(int), i;
	for(i = 0; i < len; i++)
	{
		printf("%d ", a[i] );
	}
	printf("\n");
	sorting(a, len, 11);

	for(i = 0; i < len; i++)
	{
		printf("%d ", a[i] );
	}
	printf("\n");
}