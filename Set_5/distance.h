#include<stdio.h>
#include<math.h>

float euclidean(float *x, float *y)
{
	int i, size = 5;
	float dist = 0;
	for(i=0; i<size;i++)
	{
		dist += pow(x[i] - y[i], 2);
	}
	dist = sqrt(dist);
	
	return dist;

}

float manhatten(float *x, float *y)
{
	int i, size = 5;
	float dist = 0;
	for(i=0; i<size;i++)
	{
		dist += fabs(x[i] - y[i]);
	}
	
	return dist;

}

float chebyshev(float *x, float *y)
{
	int i, size = 5;
	float array[5], max;
	for(i=0; i<size;i++)
	{
		array[i] = fabs(x[i] - y[i]);
	}
	max = array[0];
	for(i=1; i<size;i++)
	{
		if(max < array[i])
		{
			max = array[i];
		}
	}

	return max;

}

