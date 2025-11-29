#include<stdio.h>
#include<string.h>
//TAs confirmed that the problem is case sensitive.
//Function counts the number of places the 2 strings differ, as those are the number of substitutions we'll need.
//If that count is equal to k, we can transform it.
int CanTransformK(char str1[], char str2[], int k)
{
    int n = strlen(str1), i, count = 0;
    if (strlen(str2) != n)
        return 0;
    
    for(i = 0; i < n; i++)
    	{
    		if(str1[i] != str2[i])
    		{
    			count += 1;
    		}
	} 
    if(count == k)
    {
    	return 1;
    }
    else
    {
    	return 0;
    } 
     
}

int main()
{
	char str1[50] = "King", str2[50] = "Pond";
	
	printf("%d\n", CanTransformK( str1, str2, 2)); 


}
