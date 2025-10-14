#include<stdio.h>

int mod(int n, int d);

int main()
{
	int n, d = 5, ans;
	printf("Enter an integer good sir!\n");
	scanf("%d",&n);
	ans = mod(n,d);
	switch(ans)
	{
		case 0: printf("Mod %d equilavent class of %d is %d.\n",d,n,ans);
				break;
		case 1: printf("Mod %d equilavent class of %d is %d.\n",d,n,ans);
				break;
		case 2: printf("Mod %d equilavent class of %d is %d.\n",d,n,ans);
				break;
		case 3: printf("Mod %d equilavent class of %d is %d.\n",d,n,ans);
				break;
		case 4: printf("Mod %d equilavent class of %d is %d.\n",d,n,ans);
				break;
		default: ;
	}
	
}


int mod(int n, int d)
{
	while(n - d > -1 )
	{
		n-= d;
	}
	return n;
}