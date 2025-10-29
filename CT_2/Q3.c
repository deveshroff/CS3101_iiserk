#include<stdio.h>
#include<string.h>
#include<math.h>


int atoi(char *string)
{
	char zero = '0';
	int len, ascii_zero = zero, ascii_val,i; //ascii_zero is ascii_val of zero
	len = strlen(string);
	int new_number = 0;
	for(i=0; i<len;i++)
	{
		ascii_val = string[i]; //getting the ascii value of the number
		if(ascii_zero <=ascii_val && ascii_val<= ascii_zero+9)
		{
			new_number += (ascii_val - ascii_zero)*pow(10, len - i -1); //using powers of 10 and adding
		}
		else
		{
			printf("Error!\n");
			return -1;
			break;
		} 
	}
	
	
	return new_number;
}

int main()
{
	char *number = "1234";
	printf("%d\n", atoi(number));

}
