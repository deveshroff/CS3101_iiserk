#include<stdio.h>

int sumOfDigits(int a)
{
	int i, sum = 0, len;
	len = sizeof(a)/sizeof(int);
	for(i = 0; i<=len; i++)
	{
		int rem = 0;
		rem = a % 10;
		a = a - rem;
		a = a/10;
		sum += rem;
	}
	
	return sum;
	
}

int isPrime(int a)
{
	int i, prime = 0;
	for(i = 2; i<a; i++)
	{
		if(a % i == 0)
		{
			prime = 0;
		}
		else
		{
			prime = 1;
		}
	}
	return prime; 
}

int getCodeWord(int x)
	{
		int sum, prime;
		sum = sumOfDigits(x);
		prime = isPrime(sum);
		
		return prime;
	}
int main()
{
	int a, entry = 1;
	
	printf("Enter password Good Sir!\n");
	scanf("%d",&a);
	
	entry = getCodeWord(a);
	
	if(entry == 0)
	{
		printf("Welcome to Prime Suspect gang!\n");
	}
	else
	{
		printf("Intruder Alert!\n");
	}

}
