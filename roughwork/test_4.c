// 14/11/25 --> Sorting Algorithmn - Bubble, Quick, Partition, Merge (Implementation not there)
//Bubble Sort --> Big O(n^2)
#include<stdio.h>


void bubble_sort(int a[])
{	int i, j, temp, n = 5;

	for(i = 0; i<n-1;i++)
	{
		for(j=0; j<n-1-i;j++)
		{
			if(a[j]>a[j+1])
				{
					temp = a[j];
					a[j] = a[j+1];
					a[j+1] = temp;
				}
		}
	}
	return;
}

int main()
{	
	int a[5] = {5,4,3,2,1}, i, n = 5;
	bubble_sort(a);
	for(i=0; i<n;i++)
		{
			printf("%d\n",a[i]);
		}

}