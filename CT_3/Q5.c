#include<stdio.h>
#include<math.h>

void print_half(int n) 
{ 
	if(n == 1)
	{
		printf("%.2f\n", n/2.0);
	}
	else
	{
		printf("%.2f\n", n/2.0);
		print_half(n-1);
	}
}

int main()
{
	int n;
	printf("Enter an integer good sir!\n");
	scanf("%d", &n);
	print_half(n);
}