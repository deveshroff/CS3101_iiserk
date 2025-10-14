#include<stdio.h>
#include<math.h>

#define PI 3.14
int main()
{
	float r,h,vol;	
	printf("Enter radius and height.\n");
	scanf("%f,%f",&r,&h);
	vol = (PI)*pow(r,2)*h/3.;
	printf("The volume is %f.\n",vol);

}
