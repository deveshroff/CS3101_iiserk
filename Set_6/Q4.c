#include<stdio.h>
#include<string.h>
#include<stdlib.h>


int check_age(int dd, int mm, int yyyy)
{

	int dd_today = 22, mm_today = 10, yyyy_today = 2025;
    int age = yyyy_today - yyyy;

    // adjust if birthday not yet reached this year
    if (mm_today < mm || (mm_today == mm && dd_today < dd))
        age--;

    if (age >= 45)
        return 0;  // senior
    else if (age >= 18)
        return 1;  // adult
    else
        return 2;  // not eligible

}

void enqueue(char array[][50], int *front, int *rear, char *name)
{
	if(*front == -1)
	{
		*front = 0;
	}
	strcpy(array[*rear],name);
	*rear = *rear + 1;
}
char* dequeue(char array[][50], int *front, int *rear)
{
	static char item[50];
	strcpy(item,array[*front]);
	*front = *front + 1;
	return item;
}
int main()
{
	int dd[5]={}, mm[5]={}, yyyy[5]={}, n = 5,i,j_front =-1, j_rear =-1,k_front = -1, k_rear=-1;
	char name[5][50]={}, q_senior[5][50], q_junior[5][50];
	for(i=0;i<n;i++)
	{
		printf("Enter you name and birthdate --> name dd/mm/yyyy\n");
		scanf("%s %d/%d/%d",&name[i][50], &dd[i],&mm[i],&yyyy[i]);

		switch(check_age(dd[i],mm[i],yyyy[i]))
		{
		case 0: enqueue(q_senior,&j_front, &j_rear, name[i]);
			    break;
		case 1: enqueue(q_junior,&k_front, &k_rear, name[i]);
			    break;
		default: printf("Sorry not elligible for vaccination\n");
				 break;
		}
	}

	for(i=0; i<=j_rear; i++)
	{
		printf("%s\n", dequeue(q_senior, &j_front, &j_rear));
	}
	for(i=0; i<=k_rear; i++)
	{
		printf("%s\n", dequeue(q_junior, &k_front, &k_rear));
	}
}