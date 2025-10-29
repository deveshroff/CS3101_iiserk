#include<stdio.h>

/*int main()
{
	int n = 10, i,j;
	for(i = 0; i<=n; i++)
	{
		for(j = i; j <= n; j++)
		{
			printf("%d ",j);
		}
		printf("\n");
	}
}
int main()
{
	int a = 0, b = 1,n = 10, i,j;
	char c[n]={};
	for(i = 0; i<n; i++)
		{	
		c[i] = a+b;
		a = b;
		b = c[i];
		for(j=0;j<=i;j++)
			{
				printf("%d ",c[j]);
			}
		printf("\n");
		}

}
int main() {
int rows = 5, coef = 1, s, i, j;
for (i = 0; i < rows; i++) {
for (s = 1; s <= rows - i; s++)
printf(" ");
for (j = 0; j <= i; j++) {
if (j == 0)
coef = 1;
else
coef = coef * (i - j + 1) / j;
printf("%d ", coef);
}
printf("\n");
}
return 0;
}*/
int main()
{
	int n = 5,i,j,k;
	char c[2*n - 1] = {};
	for(i=0;i<n;i++)
	{
		c[i] = n-i;
	}
	for(k=n;k<=2*n-1;k++)
	{
		c[k] = k - n + 2;
	}
	for(j=0;j<2*n - 1;j++)
	{
		for(i=0;i<=j;i++)
	{
		printf("%d",c[i]);
	}
	printf("\n");
}
}