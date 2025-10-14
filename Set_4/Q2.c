#include<stdio.h>

int main()
{
	int username[5] = {12,34,-45,67,89}, pass[5]= {0,1,2,3,4},user,password;
	int cont = 1, entry = 1,i,j,key;
	do
	{
		printf("Enter your username Good Sir!\n");
		scanf("%d",&user);
		for(i=0;i<5;i++)
		{
			if(username[i] == user)
			{
				entry = 0;
				key = i;
			}
		}
		if(entry == 0)
		{
			printf("Now password Good Sir!\n");
			scanf("%d",&password);
		}
		else
		{
			printf("Wrong Username! Do you wish to try again? Yes(0), No(1) ?\n");
			scanf("%d",&cont);
			continue;
		}
		if(pass[key] == password)
		{
			printf("Entry Granted!\n");
		}
		else
		{
			printf("Wrong Password! Do you wish to try again? Yes(0), No(1) ?\n");
			scanf("%d",&cont);
		}
	}
	while(cont == 0);
}