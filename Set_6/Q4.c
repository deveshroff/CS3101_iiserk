#include<stdio.h>

void grace_marks(int *a, int len)
{	int i, size;
	for(i=0;i<len;i++)
	{
		if(a[i] < 40)
		{
			a[i]+=5;
		}
	}

}

int main()
{
	int marks[5] = {23, 56, 39, 73, 87}, i;
	printf("Before grace marks the array is\n");
	for(i = 0; i < 5; i++)
	{
	printf("%d\n", marks[i]);
	}
	printf("After grace marks the array is\n");
	grace_marks(marks, 5);
	for(i = 0; i < 5; i++)
	{
	printf("%d\n", marks[i]);
	}
}
