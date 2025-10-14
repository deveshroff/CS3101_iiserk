#include<stdio.h>
#include<math.h>

void main()
{
float x, x_square;
	printf("Enter the number you want to square:\n");
	scanf("%f",&x);
	x_square = pow(x,2);
	printf("The square of %.2f is %.2f.\n",x,x_square);
}

