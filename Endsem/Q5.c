#include<stdio.h>
#include<string.h>

typedef struct souvenir{
char name[50];
int id;
int stock;
float price;
}SOUVE;

//function for creating the file.
void fileWrite(char *filename, SOUVE* souvenirs, int number)
{
	FILE *fptr;
	int i;
	fptr = fopen(filename, "w");
	for(i = 0 ; i < number ; i++)
	{
	fwrite(&souvenirs[i], sizeof(SOUVE), 1, fptr);
	}
	fclose(fptr);
}
//function for reading the file.
void fileRead(char *filename)
{
	FILE *fptr;
	SOUVE souvenir;
	fptr = fopen(filename, "r");
	while(fread(&souvenir, sizeof(SOUVE), 1, fptr))
	{
	printf ("Name = %s\n", souvenir.name);
	printf ("Stock ID = %d\n", souvenir.id);
	printf ("Stock left = %d\n",souvenir.stock);
	printf ("Price = %.2f\n", souvenir.price);
	}
	fclose(fptr);
}

//function for updating the file.
void fileUpdate(char *filename, int stock_id, int quantity)
{
	FILE *fptr;
	SOUVE souvenir;
	fptr = fopen(filename, "r+");
	while(fread(&souvenir, sizeof(SOUVE), 1, fptr))
	{
	if(souvenir.id == stock_id)
	{
	souvenir.stock = souvenir.stock - quantity;//Updating the stock
	fseek(fptr, -sizeof(SOUVE), 1);
	fwrite(&souvenir, sizeof(SOUVE), 1, fptr);
	}
	}
	fclose(fptr);
}
//function for returning the stock of particular ID.
int getStock(char *filename, int stock_id)
{
	FILE *fptr;
	SOUVE souvenir;
	int stock;
	fptr = fopen(filename, "r");
	while(fread(&souvenir, sizeof(SOUVE), 1, fptr))
	{
	if(souvenir.id == stock_id)
	{
	stock = souvenir.stock; //Returning the stock
	}
	}
	fclose(fptr);
	return stock;
}
//function for returning the price of particular ID.
float getPrice(char *filename, int stock_id)
{
	FILE *fptr;
	SOUVE souvenir;
	float price;
	fptr = fopen(filename, "r");
	while(fread(&souvenir, sizeof(SOUVE), 1, fptr))
	{
	if(souvenir.id == stock_id)
	{
	price =  souvenir.price; //Returning the price
	}
	}
	fclose(fptr);
	return price;
}

//main function to create file and check functions
/*int main()
{
	SOUVE souvenirs[5];
	char name[5][50] = {"Key Chain", "Bracelet", "Necklace", "Ring", "Chocolates"};
	int id[5] = {1203, 803, 212, 229, 132};
	int stock[5] = {12, 23, 10, 8, 16}, i;
	float price[5] = {100, 250, 500, 150, 50};
	int stock_id = 1203;
	
	 for(i =0; i<5; i++)
	 {
		strcpy(souvenirs[i].name, name[i]);
		souvenirs[i].id = id[i];	 
		souvenirs[i].stock = stock[i];
		souvenirs[i].price = price[i];
	 }
	 
	 //fileWrite("souvenirs.txt", souvenirs, 5);
	 //fileRead("souvenirs.txt");
	 printf("%d\n", getStock("souvenirs.txt", stock_id));
	 printf("%f\n" ,getPrice("souvenirs.txt", stock_id));
}*/

//main code is below
int main()
{
	float bill = 0;
	int cont = 0, quant, stock_id;
	printf("Welcome to the Overpriced Souvenir Shop!\n");
	do
	{
		fileRead("souvenirs.txt");
		printf("Pleas enter Stock ID.\n");
		scanf("%d", &stock_id);
		switch(stock_id)
		{
			case 1203: printf("Enter the Quantity you want\n");
				   scanf("%d", &quant); 
				   if(quant <= getStock("souvenirs.txt", stock_id))
				   {
				  	bill += quant*getPrice("souvenirs.txt", stock_id);
				  	fileUpdate("souvenirs.txt", stock_id, quant);
				   }
				   else
				   {
				  	printf("Sorry we are out of stock!\n");
				   }
				   break;
			case 803: printf("Enter the Quantity you want\n");
				   scanf("%d", &quant); 
				   if(quant <= getStock("souvenirs.txt", stock_id))
				   {
				  	bill += quant*getPrice("souvenirs.txt", stock_id);
				  	fileUpdate("souvenirs.txt", stock_id, quant);
				   }
				   else
				   {
				  	printf("Sorry we are out of stock!\n");
				   }
				   break;
			case 212: printf("Enter the Quantity you want\n");
				   scanf("%d", &quant); 
				   if(quant <= getStock("souvenirs.txt", stock_id))
				   {
				  	bill += quant*getPrice("souvenirs.txt", stock_id);
				  	fileUpdate("souvenirs.txt", stock_id, quant);
				   }
				   else
				   {
				  	printf("Sorry we are out of stock!\n");
				   }
				   break;
			case 229: printf("Enter the Quantity you want\n");
				   scanf("%d", &quant); 
				   if(quant <= getStock("souvenirs.txt", stock_id))
				   {
				  	bill += quant*getPrice("souvenirs.txt", stock_id);
				  	fileUpdate("souvenirs.txt", stock_id, quant);
				   }
				   else
				   {
				  	printf("Sorry we are out of stock!\n");
				   }
				   break;
			case 132: printf("Enter the Quantity you want\n");
				   scanf("%d", &quant); 
				   if(quant <= getStock("souvenirs.txt", stock_id))
				   {
				  	bill += quant*getPrice("souvenirs.txt", stock_id);
				  	fileUpdate("souvenirs.txt", stock_id, quant);
				   }
				   else
				   {
				  	printf("Sorry we are out of stock!\n");
				   }
				   break;
			default: printf("wrong Product ID\n");
				 break;
			
		}
		printf("Do you wish to continue Shopping? Yes(0) or No(1)?\n");
		scanf("%d", &cont);
	}
	while(cont != 1);
	
	printf("Your bill is %.2f\n", bill);
	printf("Thank you for Shopping!\n");
}

