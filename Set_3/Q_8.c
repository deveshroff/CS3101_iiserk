#include<stdio.h>

int main()
{
	int stock_0 = 12, stock_1 = 15, stock_2 = 22, item_id, quantity, j = 0; 
	float price_0 = 150.00, price_1 = 225.00, price_2 = 350.00, bill = 0;
	printf("Welcome Good Sir! What would you like to have today?\n");
	while(j != 1)
	{
		printf("Generic Item (0) Stock: %d, Price: %.2f\nGeneric Item in Blue (1) Stock: %d, Price: %.2f\nGenereic Item Returns (2) Stock: %d, Price: %.2f\n", stock_0, price_0,stock_1, price_1,stock_2, price_2);
		scanf("%d", &item_id);
	switch(item_id)
	{
		case 0: printf("How much quantity you want?\n");
				scanf("%d", &quantity);
				if (stock_0 - quantity > -1)
				{
					bill += quantity*price_0;
					stock_0 -=quantity;
				}
				else
				{
					printf("Sorry! We're running low on stock!\n");
				}
				break;
		case 1: printf("How much quantity you want?\n");
				scanf("%d", &quantity);
				if (stock_1 - quantity > -1)
				{
					bill += quantity*price_1;
					stock_1 -=quantity;
				}
				else
				{
					printf("Sorry! We're running low on stock!\n");
				}
				break;
		case 2: printf("How much quantity you want?\n");
				scanf("%d", &quantity);
				if (stock_2 - quantity > -1)
				{
					bill += quantity*price_2;
					stock_2 -=quantity;
				}
				else
				{
					printf("Sorry! We're running low on stock!\n");
				}
				break;
		default: printf("Invalid Product Id!\n");

	}
	printf("Would you like to continue Shopping? Y(0) or N(1)?\n");
	scanf("%d",&j);
}
	printf("Thank you for Shopping! Your bill is %.2f!\n",bill);
	printf("Please come again!\n");
}