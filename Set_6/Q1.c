#include<stdio.h>
#include<string.h>


typedef struct useridpass{
	char username[50];
	char password[50];
}USERPASS;

void fileWrite(char *filename, USERPASS* username, int number)
{
	FILE *fptr;
	int i;
	fptr = fopen(filename, "w");
	for(i = 0; i<number; i++)
	{
		fwrite(&username[i], sizeof(USERPASS), 1, fptr);
	}
	fclose(fptr);

}

void fileRead(char *filename, USERPASS* userpass)
{
	FILE *fptr;
	USERPASS data_array;
	fptr = fopen(filename, "rb");
	int i = 0;
	while(fread(&data_array, sizeof(USERPASS),1,fptr))
	{
    	strcpy(userpass[i].username,data_array.username);
    	strcpy(userpass[i].password,data_array.password);
    	i++;
	}
	fclose(fptr);
}
/*int main()
{
	char user[5][50] = {"alpha","bravo", "charlie","delta", "echo"}, pass[5][50] = {"A","B","C","D","E"};
	USERPASS userpass[10], userpass_1[10];
	int i,j,k;

	for(i = 0; i<5;i++)
	{
		strcpy(userpass[i].username,user[i]);
		strcpy(userpass[i].password,pass[i]);

	}

	//fileWrite("userid-password.txt", userpass, 5);
}*/

int main()
{
	char user[50],password[50];
	int cont = 1, entry = 1,i,key;
	USERPASS userpass[10];
	fileRead("userid-password.txt", userpass);
	do
	{
		printf("Enter your username Good Sir!\n");
		scanf("%s", user);
		for(i=0;i<5;i++)
		{
			if(strcmp(userpass[i].username, user) == 0)
			{
				entry = 0;
				key = i;
			}
		}
		if(entry == 0)
		{
			printf("Now password Good Sir!\n");
			scanf("%s",password);
		}
		else
		{
			printf("Wrong Username! Do you wish to try again? Yes(0), No(1) ?\n");
			scanf("%d",&cont);
			continue;
		}
		if(strcmp(userpass[key].password,password) == 0)
		{
			printf("Entry Granted!\n");
			cont = 1;
		}
		else
		{
			printf("Wrong Password! Do you wish to try again? Yes(0), No(1) ?\n");
			scanf("%d",&cont);
		}
	}
	while(cont == 0);
}