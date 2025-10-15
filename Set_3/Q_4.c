#include<stdio.h>
int main()
{
	int unit;
	float bill =0.0;
	printf("Enter the unit consumption.\n");
	scanf("%d", &unit);
	if (unit - 25 > 0)
	{
		bill += 4.89*25;
		unit-=25;
		if (unit - 35 > 0)
	{
		bill += 5.40*35;
		unit-=35;
		if (unit - 40 > 0)
	{
		bill += 6.41*40;
		unit-=40;
		if (unit - 50 > 0)
	{
		bill += 7.16*50;
		unit-=50;
		if (unit - 150 > 0)
	{
		bill += 7.33*150;
		unit-=150;
		if (unit > 0)
	{
		bill += unit*8.92;
		printf("Your bill is %.2f Rs.\n", bill);
		
	}
	else
	{
		printf("Your bill is %.2f Rs.\n", bill);
	}
	}
	else
	{
		bill += unit*7.33;
		printf("Your bill is %.2f Rs.\n", bill);
	}
	}
	else
	{
		bill += unit*7.16;
		printf("Your bill is %.2f Rs.\n", bill);
	}
	}
	else
	{
		bill += unit*6.41;
		printf("Your bill is %.2f Rs.\n", bill);
	}
	}
	else
	{
		bill += unit*5.40;
		printf("Your bill is %.2f Rs.\n", bill);
	}

	}
	else
	{
		bill += unit*4.89;
		printf("Your bill is %.2f Rs.\n", bill);
	}
	
	
	
	
}
	
	
