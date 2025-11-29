#include<stdio.h>
//sorry for the continuous asking of continuation, sir asked for it :)
int main()
{
	int basket[3] = {0,0,0}, budget; //Basket is holding frequncies of movie, ride and games.
	int bill[3] = {0,0,0}; int space[3] = {2, 2, 3}; //bill has bill for individual item and space has occupancy left of individual things
	int cont = 1, movie_cost = 300, ride_cost = 150, game_cost = 100, quant;
	int deselect_mov = 1, deselect_ride = 1, deselect_game = 1;
	char name[5];
	int mov_pass = 1, ride_pass = 1, game_pass = 1;
	int bill_gen = 1;
	printf("Welcome to ShukhSayar Good Sir!\n");
	printf("Enter unique Government ID\n");
	scanf("%s", name);
	printf("We have Movies, Games and Rides for you today!\n");
	printf("Enter your Budget\n");
	scanf("%d", &budget);
	if(budget < 100)
	{
		printf("Sorry too low of a budget!\n");
	}
	else
	{
		bill_gen = 0;
		cont = 0;
	}	
	while(cont == 0)
	{
		while(mov_pass != 0)
		{
		printf("How many movie tickets would you like to buy?\n");
		scanf("%d", &quant);
		if((quant <= space[0]) && (budget - quant*movie_cost >= 0))
		{
			printf("Adding %d Movies to Basket\n", quant);
			budget -= quant*movie_cost;
			bill[0] += quant*movie_cost;
			basket[0] += quant;
			space[0] -= quant;
			mov_pass = 0;
			printf("Budget remaining is %d\n", budget);
		}
		else if(quant <= space[0] && (budget - quant*movie_cost < 0))
		{
			printf("Sorry you can't select that due to monetary issues\n");
		}
		else if(quant > space[0] && (budget - quant*movie_cost >= 0))
		{
			printf("Sorry you can't select that due to space issues\n");
		}
		else
		{
			printf("Sorry you can't select that due to space and monetary issues\n");
		}
		}
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		if(cont == 1)
		{
			break;
		}

		while(ride_pass != 0)
		{
		printf("How many ride tickets would you like to buy?\n");
		scanf("%d", &quant);
		if((quant <= space[1]) && (budget - quant*ride_cost >= 0))
		{
			printf("Adding %d Rides to Basket\n", quant);
			budget -= quant*ride_cost;
			bill[1] += quant*ride_cost;
			basket[1] += quant;
			space[1] -= quant;
			ride_pass = 0;
			printf("Budget remaining is %d\n", budget);
		}
		else if(quant <= space[1] && (budget - quant*ride_cost < 0))
		{
			printf("Sorry you can't select that due to monetary issues\n");
		}
		else if(quant > space[1] && (budget - quant*ride_cost >= 0))
		{
			printf("Sorry you can't select that due to space issues\n");
		}
		else
		{
			printf("Sorry you can't select that due to space and monetary issues\n");
		}
		}
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		if(cont == 1)
		{
			break;
		}

		
		while(game_pass != 0)
		{
		printf("How many Game tickets would you like to buy?\n");
		scanf("%d", &quant);
		if((quant <= space[2]) && (budget - quant*game_cost >= 0))
		{
			printf("Adding %d Games to Basket\n", quant);
			budget -= quant*game_cost;
			bill[2] += quant*game_cost;
			basket[2] += quant;
			space[2] -= quant;
			game_pass = 0;
			printf("Budget remaining is %d\n", budget);
		}
		else if(quant <= space[2] && (budget - quant*game_cost < 0))
		{
			printf("Sorry you can't select that due to monetary issues\n");
		}
		else if(quant > space[2] && (budget - quant*game_cost >= 0))
		{
			printf("Sorry you can't select that due to space issues\n");
		}
		else
		{
			printf("Sorry you can't select that due to space and monetary issues\n");
		}
		}
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		if(cont == 1)
		{
			break;
		}

		printf("Would you like to deselect movie ticket? Yes(0)/ No(1)?\n");
		scanf("%d", &deselect_mov);
		if(deselect_mov == 0)
		{
			printf("How many tickets to cancel?\n");
			scanf("%d", &quant);
			budget += quant*movie_cost;
			bill[0] -= quant*movie_cost;
			basket[0] -= quant;
			space[0] += quant;
			printf("Budget remaining is %d\n", budget);
		}
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		if(cont == 1)
		{
			break;
		}

		
		
		printf("Would you like to deselect ride ticket? Yes(0)/ No(1)?\n");
		scanf("%d", &deselect_ride);
		if(deselect_ride == 0)
		{
			printf("How many tickets to cancel?\n");
			scanf("%d", &quant);
			budget += quant*ride_cost;
			bill[1] -= quant*ride_cost;
			basket[1] -= quant;
			space[1] += quant;
			printf("Budget remaining is %d\n", budget);
		}
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		if(cont == 1)
		{
			break;
		}

		
		
		printf("Would you like to deselect game ticket? Yes(0)/ No(1)?\n");
		scanf("%d", &deselect_game);
		if(deselect_game == 0)
		{
			printf("How many tickets to cancel?\n");
			scanf("%d", &quant);
			budget += quant*game_cost;
			bill[2] -= quant*game_cost;
			basket[2] -= quant;
			space[2] += quant;
			printf("Budget remaining is %d\n", budget);
		}
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		if(cont == 1)
		{
			break;
		}

		
		printf("Would you like to continue? Yes(0)/ No(1)?\n");
		scanf("%d", &cont);
		mov_pass = cont;
		game_pass = cont;
		ride_pass = cont;
	}
	if(bill_gen == 0)
	{
	printf("Thank you for visiting! Your bill is as follows:\n");
	printf("BILL for %s\n", name);
	printf("Movie ---> %d x %d == %d\n", movie_cost, basket[0], bill[0]);
	printf("Ride ---> %d x %d == %d\n", ride_cost, basket[1], bill[1]);
	printf("Game ---> %d x %d == %d\n", game_cost, basket[2], bill[2]);
	printf("Total ---> %d\n", bill[0]+bill[1]+bill[2]);
	printf("Budget remaining is %d\n", budget);
	}
}
