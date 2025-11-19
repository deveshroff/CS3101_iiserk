#include<stdio.h>

int check_sum(int *a, int sum, int len)
{	int low = 0, high = len -1, true = 1;
		
		while(low != high)
		{
			if(a[low] + a[high] == sum)
			{
				true = 0;
				break;
			}
			else if(a[low] + a[high] > sum)
			{
				high = high - 1;
			}
			else if(a[low] + a[high] < sum)
			{
				low = low + 1;
			}
		}
		return true; //true == 0 implies the sum exists, otherwise it will return 1
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7,8, 9, 10}, sum = 6; //sum is the value we are checking for
	int len = sizeof(a)/sizeof(int), i;
	printf("%d\n", check_sum(a, sum, len));
}
