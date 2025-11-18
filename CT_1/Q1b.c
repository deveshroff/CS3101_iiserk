// Q1 b
#include<stdio.h>

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

//Defining our functions
int laddu()
{	static int laddu_count = 1; //using static variable - which retain their value
	printf("I bet you loved the Laddu! This is your Laddu number %d.\n", laddu_count);
	laddu_count ++; //updating each time after it is called

}
int rosgolla()
{	static int ros_count = 1;
	printf("I bet you loved the Rosgolla! This is your Rosgolla number %d.\n", ros_count);
	ros_count ++;

}
int shrikhand()
{	static int shri_count = 1;
	printf("I bet you loved the Shrikhand! This is your Shrikhand number %d.\n", shri_count);
	shri_count ++;

}
