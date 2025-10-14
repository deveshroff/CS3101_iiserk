#include<stdio.h>
#include<string.h>

int main()
{
	char username[5][20] = {"Arjun","Barry","Chandan","David","Esha"}, pass[5][20] = {"Alpha","Bravo","Charlie","Delta","Echo"},user[20],password[20];
	int cont = 1, entry = 1,i,j,key,access = 1,vaca_apply = 0,h_type,n_hol,prereq;
	int l_1 = 30,l_2 = 15,l_3 = 10,l_4 = 60,l_5 = 5;
	char res_hol[6];
	char list_hol[5][6] = {"08/03","12/03", "10/05","22/09","02/12"}; 
	do
	{
		printf("Enter your username Good Sir!\n");
		scanf("%s",user);
		for(i=0;i<5;i++)
		{
			if(strcmp(username[i],user) == 0)
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
		if(strcmp(pass[key],password) == 0)
		{
			printf("Entry Granted!\n");
			cont = 1;
			access = 0;
		}
		else
		{
			printf("Wrong Password! Do you wish to try again? Yes(0), No(1) ?\n");
			scanf("%d",&cont);
		}
	}
	while(cont == 0);
	while(access == 0 && vaca_apply == 0)
	{
		printf("Which type of leave do you wish to apple for?\n");
		printf("Casual Leave (1)\n");
		printf("Special Casual Leave (2)\n");
		printf("On-duty Leave (3)\n");
		printf("Vacation Leave (4)\n");
		printf("Restriceted Holiday Leave (5)\n");
		scanf("%d",&h_type);

		switch(h_type)
		{
		case 1: printf("You are applying for Casual Leave, number left = %d.\n", l_1);
				printf("Enter the number of days of leave you require.\n");
				scanf("%d",&n_hol);
				if(l_1 - n_hol< 0)
				{
					printf("Leave not approved!\n");
				}
				else
				{
					printf("Leave Granted!\n");
					l_1 -= n_hol;
				}
				break;
		case 2: printf("You are applying for Special Casual Leave, number left = %d.\n", l_2);
				printf("Enter the number of days of leave you require.\n");
				scanf("%d",&n_hol);
				if(l_2 - n_hol< 0)
				{
					printf("Leave not approved!\n");
				}
				else
				{
					printf("Do you have Invitation Letter? Yes(0) or No(1)?\n");
					scanf("%d",&prereq);
					if(prereq == 0)
					{
					printf("Leave Granted!\n");
					l_2 -= n_hol;
					}
					else
					{
						printf("Sorry, Invitation Letter is required!\n");
					}
				}
				break;
		case 3: printf("You are applying for On-duty Leave, number left = %d.\n", l_3);
				printf("Enter the number of days of leave you require.\n");
				scanf("%d",&n_hol);
				if(l_3 - n_hol< 0)
				{
					printf("Leave not approved!\n");
				}
				else
				{
					printf("Do you have Invitation Letter? Yes(0) or No(1)?\n");
					scanf("%d",&prereq);
					if(prereq == 0)
					{
					printf("Leave Granted!\n");
					l_3 -= n_hol;
					}
					else
					{
						printf("Sorry, Invitation Letter is required!\n");
					}
				}
				break;
		case 4: printf("You are applying for Vacation Leave, number left = %d.\n", l_4);
				printf("Enter the number of days of leave you require.\n");
				scanf("%d",&n_hol);
				if(l_4 - n_hol< 0)
				{
					printf("Leave not approved!\n");
				}
				else
				{
					printf("Which Month are you applying for? June(0), July(1), December(2) or Other(3)?\n");
					scanf("%d",&prereq);
					if( 0 <= prereq && prereq <= 2)
					{
					printf("Leave Granted!\n");
					l_4 -= n_hol;
					}
					else
					{
						printf("Sorry, We don't grant Vacation Leave for that month!\n");
					}
				}
				break;
		case 5: printf("You are applying for Restricted Holiday Leave, number left = %d.\n", l_5);
				printf("No of days you can apply for is one. Please enter (DD/MM).\n");
				scanf("%s",res_hol);
				n_hol = 1;
				if(l_5 - n_hol < 0)
				{
					printf("Leave not approved!\n");
				}
				else
				{
					prereq = 1;
					for(i=0; i<5;i++)
					{
						if(strcmp(list_hol[i],res_hol) == 0)
							prereq = 0;
					}
					if( prereq == 0)
					{
					printf("Leave Granted!\n");
					l_5 -= n_hol;
					}
					else
					{
						printf("Sorry, That day is not included in restricted holidays!\n");
					}
				}
				break;
		default: printf("Wrong code!\n");
				 break;
		}
		printf("Do you wish to continue applying for Leave? Yes(0) or No(1)?\n");
		scanf("%d",&vaca_apply);

	}
}