#include<stdio.h>
//The code adheres to the Big O(M + N) time complexity as we have used a similar logic of Merge Sort (which is Big O(M + N)), comparing individual terms and then increasing the index of arr1 or arr2 based on our given conditions. We dont use for loops which would've increased the complexity to Big O(N^2).
int complement(int arr1[], int arr2[], int temp[], int n1, int n2 )
{
	int i = 0;
	int j = 0;
	int k = 0;
	while(i < n1)
	{
	if( arr1[i] != arr2[j])
		{
			j = j + 1;
			if(j == n2)
			{
				temp[k] = arr1[i];
				k = k + 1;
				i = i + 1; // corrected version
			}
		}
	else if(arr1[i] == arr2[j])
		{
			i = i + 1;
			j = 0;
		}
	}
	return k;
}

int main()
{
	int a[6] = {2,3,4,5,6,7}, b[6] = {2,4,6,8,10,12}, c[20], len, i;
	len = complement(a, b, c, 6, 6); //changing c and getting its length.
	if(len == 0)
	{
		printf("No compliment Found!\n");
	}
	else
	{
		for(i = 0; i< len; i++)
		{
			printf("%d ", c[i]);
		}
		printf("\n");
	}

}
