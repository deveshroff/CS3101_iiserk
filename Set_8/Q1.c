#include<stdio.h>

int missing_num(int *a, int len)
{	int sum = 0, i;
	for(i = 0; i < len; i++)
	{
		sum += a[i];
	}

	return len*(len+1)*0.5 - sum;

}

int main()
{
	int a[] = {0,3,5,4,1,2,6,8,9,10};
	int len = sizeof(a)/sizeof(int), i;
	printf("%d\n", missing_num(a, len));
}