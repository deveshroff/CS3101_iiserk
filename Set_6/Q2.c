#include<stdio.h>
#include<string.h>


typedef struct product{
	char name[50];
	char stockid[50];
	int stock;
	float price;
}PRODUCT;

void fileWrite(char *filename, PRODUCT* products, int number)
{
	FILE *fptr;
	int i;
	fptr = fopen(filename, "wb");
	for(i = 0; i<number; i++)
	{
		fwrite(&products[i], sizeof(PRODUCT), 1, fptr);
	}
	fclose(fptr);

}

void fileRead(char *filename)
{
	FILE *fptr;
	PRODUCT data_array;
	fptr = fopen(filename, "rb");
	int i = 0;
	while(fread(&data_array, sizeof(PRODUCT),1,fptr))
	{
    	printf("Name: %s\n",data_array.name);
    	printf("Stock id: %s\n",data_array.stockid);
    	printf("Stock: %d\n",data_array.stock);
    	printf("Price: %.2f\n",data_array.price);
    	i++;
	}
	fclose(fptr);
}
int getStock(char *filename, char *stock_id)
{
	FILE *fptr;
	PRODUCT data_array;
	fptr = fopen(filename, "rb");
	int i = 0;
	while(fread(&data_array, sizeof(PRODUCT),1,fptr))
	{
    	if(strcmp(stock_id, data_array.stockid) == 0)
    	{
    		return data_array.stock;
    	}
    	i++;
	}
	fclose(fptr);
}
float getPrice(char *filename, char *stock_id)
{
	FILE *fptr;
	PRODUCT data_array;
	fptr = fopen(filename, "rb");
	int i = 0;
	while(fread(&data_array, sizeof(PRODUCT),1,fptr))
	{
    	if(strcmp(stock_id, data_array.stockid) == 0)
    	{
    		return data_array.price;
    	}
    	i++;
	}
	fclose(fptr);
}
void fileUpdate(char *filename, char *stock_id, int quantity)
{
	FILE *fptr;
	PRODUCT data_array;
	fptr = fopen(filename, "r+");
	int i = 0;
	while(fread(&data_array, sizeof(PRODUCT),1,fptr))
	{
    	if(strcmp(stock_id, data_array.stockid) == 0)
    	{
    		data_array.stock = data_array.stock - quantity;//Updating the stock
			fseek(fptr, -sizeof(PRODUCT), 1);
			fwrite(&data_array, sizeof(PRODUCT), 1, fptr);
			break;
    	}
    	i++;
	}
	fclose(fptr);
}
/*int main()
{
	char name[4][50] = {"apple","banana", "chickoo","dragon fruit"}, stockid[4][50] = {"A1","B2","C3","D4"};
	int stock[4] = {12,10,15,9};
	float price[4] = {30, 20, 45, 90};
	PRODUCT products[10], products_1[10];
	int i;

	for(i = 0; i<4;i++)
	{
		strcpy(products[i].name, name[i]);
		strcpy(products[i].stockid, stockid[i]);
		products[i].stock = stock[i];
		products[i].price = price[i];

	}

	fileWrite("catalogue.txt", products, 4);
	fileRead("catalogue.txt");
	printf("%d\n", getStock("catalogue.txt", "A1"));
	//fileUpdate("catalogue.txt", "A1", 5);
	//fileRead("catalogue.txt");
}*/

int main()
{
	int  quantity, j = 0; 
	float bill = 0;
	char item_id[10];
	char *filename = "catalogue.txt";
	printf("Welcome Good Sir! What would you like to have today? Please enter the respective stock id.\n");
	while(j != 1)
	{
		fileRead("catalogue.txt");
		scanf("%s", item_id);
		printf("How much quantity you want?\n");
		scanf("%d", &quantity);
		if (getStock(filename, item_id) - quantity > -1)
			{
				bill += quantity*getPrice(filename,item_id);
				fileUpdate(filename, item_id, quantity);
			}
		else
			{
				printf("Sorry! We're running low on stock!\n");
			}
		printf("Would you like to continue Shopping? Y(0) or N(1)?\n");
		scanf("%d",&j);

	}
	
	printf("Thank you for Shopping! Your bill is %.2f!\n",bill);
	printf("Please come again!\n");
}