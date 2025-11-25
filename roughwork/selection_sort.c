#include<stdio.h>

void selection_sort(int a[])
{	int i, j, min, temp, n = 5;

	for(i = 0; i<n-1;i++)
	{
		min = i;
		for(j = i+1; j<n;j++)
		{
			if(a[j] < a[min])
				{
					min = j;
				}
		}
		temp = a[i];
		a[i] = a[min];
		a[min] = temp;
	}
	return;
}

int main()
{	
	int a[5] = {5,4,3,2,1}, i, n = 5;
	selection_sort(a);
	for(i=0; i<n;i++)
		{
			printf("%d\n",a[i]);
		}

}