#include <stdio.h>

int main() 
{
    
    int x = 10, y = 20;
       
    {//Block 1
        int y = 20;
        {//Block2        
        	int x = 99;
        
        	printf("Sum1: %d\n", x + y);
        }	
        
        printf("Sum2: %d\n", x + y);
    } 

    printf("Sum3: %d\n", x + y);

    return 0;
}

