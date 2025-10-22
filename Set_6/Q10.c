#include<stdio.h>
#include<math.h>

int factorial(int n)
{
	int i, fact = 1;
		if(n==0)
		{
			return 1;
		}
		else
		{
		for(i = 1; i<=n; i++)
		{
			fact = i*fact;
		}
		return fact;
		}
}

float Sin(float x, int n)
{
	int i = 0;
	float sum = 0;
	while(i<n)
	{
		sum += pow(-1, i)*pow(x,2*i + 1)/factorial(2*i + 1);
		i++;
	}
	
	return sum;
}

int main()
{
	float x = 1.57, sin_x_1, sin_x_2;
	int n = 10;
	sin_x_1 = Sin(x, n);
	sin_x_2 = sin(x);
	printf("%.5f %.5f\n", sin_x_1, sin_x_2);

}
