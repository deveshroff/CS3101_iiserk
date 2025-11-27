#include<stdio.h>
#include<math.h>
// used if else conditions, if the first condition isnt satisfied, the next condition is checked.
int main()
{
	float height = 1.78, weight = 73, bmi;
	bmi = weight/pow(height, 2);
	
	if(bmi < 18.5)
	{
		printf("Your BMI is %.2f and health status is Underweight.\n", bmi);
	}
	else if(18.5 <= bmi && bmi <= 25.0)
	{
		printf("Your BMI is %.2f and health status is Normal.\n", bmi);
	} 
	else if(25.0 < bmi && bmi <= 30.0)
	{
		printf("Your BMI is %.2f and health status is Overweight.\n", bmi);
	} 
	else if(bmi > 30.0)
	{
		printf("Your BMI is %.2f and health status is Obese.\n", bmi);
	} 

}
