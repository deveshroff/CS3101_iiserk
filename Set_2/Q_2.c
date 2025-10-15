#include<stdio.h>

//int rc = 0, dom = 0, baw = 0;
int rollacosta();
int dominos();
int bawarchi();
int main()
{
	rollacosta();
	rollacosta();
	dominos();
	bawarchi();
	rollacosta();
	
}
int rollacosta()
{	static int rc = 0;
	rc++;
	printf("Welcome to RollaCosta! This is your visit number %d.\n",rc);
}
int dominos()
{	static int dom = 0;
	dom++;
	printf("Welcome to Dominos! This is your visit number %d.\n",dom);
}
int bawarchi()
{	static int baw = 0;
	baw++;
	printf("Welcome to Bawarchi! This is your visit number %d.\n",baw);
}
