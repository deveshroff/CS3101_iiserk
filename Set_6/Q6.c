#include<stdio.h>
#include "distance.h"


int main()
{
	float x[5] = {1,2,3,4,5}, y[5] = {6,7,8,9,10};
	float eucl, manhat, cheby;
	eucl = euclidean(x,y);
	printf("%f\n", eucl);
	manhat = manhatten(x,y);
	printf("%f\n", manhat);



}
