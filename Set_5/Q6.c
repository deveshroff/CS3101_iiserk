#include<stdio.h>
#include "distance.h"


int main()
{
	float x[5] = {12,45,10,78,69}, y[5] = {35,67,90,11,32};
	float eucl, manhat, cheby;
	eucl = euclidean(x,y);
	printf("The Euclidean distance between X and Y is %.2f\n", eucl);
	manhat = manhatten(x,y);
	printf("The Manhatten distance between X and Y is %.2f\n", manhat);
	cheby = chebyshev(x,y);
	printf("The Chebyshev distance between X and Y is %.2f\n", cheby);



}
