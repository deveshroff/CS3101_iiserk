#include<stdio.h>

int main()
{
	int a[11] = {2, 4, 6, 8, 10, 12, 14, 0, 0, 0, 0}, key, insert, i = 0;


	printf("Enter a number Good Sir!\n");
	scanf("%d",&insert);

	for(i=0;i<11;i++)
	{
		if(a[i] == 0)
		{
			a[i] = insert;
			break;
		}
	}

	printf("Enter the number you want to search for\n");
	scanf("%d",&key);

	for(i=0;i<11;i++)
	{
		if(a[i] == key)
		{
			printf("Found at index %d\n", i);
			i = -1;
			break;
		}
		
	}
	if(i!=-1)
	{
		printf("Couldn't find %d\n", key);
	}

}