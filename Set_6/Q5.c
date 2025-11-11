#include<stdio.h>
#include<string.h>
#include<stdlib.h>

void push(char array[][50], int *top, char *location)
{

		*top = *top + 1;
		strcpy(array[*top],location);
}
char pop(char array[][50], char *removed, int *top)
{
		*top = *top -1;
		strcpy(removed,array[(*top)+1]);
		
}
/*bool isEmpty()
{
	if(top == -1)
	{
		return True;
	}
	else
	{
		return False;
	}
}
bool isFull()
{
	if(top == MAX -1)
	{
		return True;
	}
	else
	{
		return False;
	}
}*/
char* Peek(char array[][50], int *top)
{
	return array[*top];
}

int main()
{
	char locations[8][50] = {"Taj Mahal","Delhi", "Jaipur", "Goa", "Kanyakumari", "Puducherry", "Sunderbans","Darjeeling"}, array[8][50], removed[8][50];
	int top = -1, i;

	for(i =0; i<8; i++)
	{
		push(array, &top, locations[i]);
	}
	for(i =0; i<8; i++)
	{
		printf("%s\n", array[i]);
	}
	for(i =0; i<8; i++)
	{
		pop(array, removed[i], &top);
	}
	for(i =0; i<8; i++)
	{
		printf("%s\n", removed[i]);
	}


}