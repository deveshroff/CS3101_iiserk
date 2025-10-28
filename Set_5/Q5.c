#include<stdio.h>

float averageint(int *a, int len)
{	int i;
	float avg = 0;
	for(i=0;i<len;i++)
	{
		avg+= a[i];
	}
	avg = avg/len;
	return avg;

}

int main()
{
	int num[10] = {1,2,3,4,5,6,7,8,9,10};
	float avg;
	avg = averageint(num, 10);
	printf("The average of the given array of numbers is %.2f\n", avg);


}
