#include<stdio.h>
#include<math.h>

int sum_sq(int sum_num, int n)  //sum_num is the starting sum, and the value of square of integers keeps on adding onto it.
{ 
	if(n == 1)
	{
		sum_num += n;
	}
	else
	{

		return pow(n,2) + sum_sq(sum_num, n-1); //recursion happens here, square of number is added the recursive function call
	}
}

int main()
{
	int n;
	printf("Enter an integer good sir!\n");
	scanf("%d", &n);
	printf("The squared sum of first %d integers is %d\n", n, sum_sq(0,n));
}
