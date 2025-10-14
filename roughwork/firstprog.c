/* Calculating Volume of Sphere of Radius 'R' defined by user.
   Code by Devang */
#include<stdio.h>
#include<math.h>
#define PI 3.14 //Not a global variable, it is something call macro

float calculate_volume(float r);

int main()
{float r,volume;
	printf("Please enter radius 'R'.\n");
	scanf("%f",&r);
	volume = calculate_volume(r);
	printf("The volume of a sphere of radius %.3f is %.3f.\n",r,volume);
}
float calculate_volume(float r)
{
        float vol;
        vol = (4/3)*PI*pow(r,3.0);
        return vol;
}
