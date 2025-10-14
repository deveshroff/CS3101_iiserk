#include<stdio.h>
int main()
{
	int a[5] = {1,3,5,7,9}, key = 12, found = 0,b,c,i,j;
	/*
	do{
		printf("Hello Good Sir!\n");
		a --;
	}
	while(a > 0);
	
	for(a = 0, b=1, c = 0; c <= 100;)
		{	
			c = a+b;
			a = b;
			b = c;
			printf("%d\n",c);
		}
	*/
	for(i = 0; i<5; i++)
	{
		if(a[i] == key)
		{
			found = 1;
			printf("Lets go!\n");
		}
	}
	if(found == 0)
	{
		printf("Search failed\n");
	}
}