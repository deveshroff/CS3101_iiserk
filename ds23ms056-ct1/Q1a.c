// Q1 a
#include<stdio.h>

//Defining our Global Variables
int laddu_count = 1, ros_count = 1, shri_count = 1; 

//Forward calling our functions
int laddu();
int rosgolla();
int shrikhand();


int main()
{
	laddu();
	rosgolla();
	shrikhand();
	rosgolla();
	shrikhand();
	laddu();
	laddu();
	laddu();
	
	return 0;	
}

//Defining the functions
int laddu()
{
	printf("I bet you loved the Laddu! This is your Laddu number %d.\n", laddu_count);
	laddu_count ++; //updating after each time it is called.

}
int rosgolla()
{
	printf("I bet you loved the Rosgolla! This is your Rosgolla number %d.\n", ros_count);
	ros_count ++;

}
int shrikhand()
{
	printf("I bet you loved the Shrikhand! This is your Shrikhand number %d.\n", shri_count);
	shri_count ++;

}
