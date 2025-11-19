#include<stdio.h>

int bin_search(int *a, int key, int len)
{	int low = 0, high = len -1, index = len + 1, mid;
		
		while(low <= high)
		{
			
			mid = (low + high)/2;
			if(a[mid] == key)
			{
				index = mid;
				high = mid - 1;
			}
			else if(a[mid] < key)
			{
				low = mid + 1;
			}
			else if(a[mid] > key)
			{
				high = mid - 1;
			}
		}
		return index; //true == 0 implies the sum exists, otherwise it will return 1
}

int main()
{
	int a[10] = { 2, 2, 3, 3, 3, 4, 4, 5, 5, 6}, key = 3; //sum is the value we are checking for
	int len = sizeof(a)/sizeof(int), i;
	printf("%d\n", bin_search(a, key, len));
}
