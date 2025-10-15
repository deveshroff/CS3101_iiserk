#include<stdio.h>
#include<math.h>

#define G 6.673E-11 //macro

int main()
{
	float m1,m2,r,f;
	printf("Enter the mass of two bodies and the distance between them.\n");
	scanf("%f %f %f", &m1, &m2, &r);
	f = (G*m1*m2/(pow(r,2)));
	printf("The force between two bodies is %f Newton.\n",f);
}
