// Q2
#include<stdio.h>

int main()
{	//Declaring the variables we will need
	int t;
	float in_tax_pay, inter_tax_pay, cess, exceed;
	printf("Enter your Total Income (T) Good Sir!.\n"); //Asking the user for their income
	scanf("%d",&t);
	
	if(t <= 250000) //Defining if-else-if conditions to distribute them according to their tax slabs
	{
		inter_tax_pay = 0;
	}
	else if(t <= 500000) //if the first condition isn't satisfied then only the second else if is checked
	{
		exceed = t - 250000; //finding the excess
		inter_tax_pay = 0.05*exceed;
	}
	else if(t <= 750000)
	{
		exceed = t - 500000;
		inter_tax_pay = 12500 + 0.1*exceed;
	}
	else if(t <= 1000000)
	{
		exceed = t - 750000;
		inter_tax_pay = 37500 + 0.15*exceed;
	}
	else if(t <= 1250000)
	{
		exceed = t - 1000000;
		inter_tax_pay = 75000 + 0.2*exceed;
	}
	else if(t <= 1500000)
	{
		exceed = t - 1250000;
		inter_tax_pay = 125000 + 0.25*exceed;
	}
	else
	{
		exceed = t - 1500000;
		inter_tax_pay = 187500 + 0.3*exceed;
	}

	cess = 0.04*inter_tax_pay; //Calculation the cess
	in_tax_pay = inter_tax_pay + cess; //Calculating the income tax payable by the user
	printf("The Income Tax Payable is %.2f.\n", in_tax_pay);
	
	return 0;

}
