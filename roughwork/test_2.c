#include<stdio.h>
#include<string.h>
#include<malloc.h>


/*int main()
{
	int array[5] = {1,2,3,4,5};
	int i, *p;
	p = array;
	for(i = 0; i< 5; i++)
	{
		printf("%d %u\n", *(p),(p));
		p++;
	}
}*/
char* encode(char* s)
{
	char *s_encode;
	s_encode = (char*)malloc(sizeof(char)*20);  //dynamic allocation
	s_encode = (char*)realloc(s_encode,sizeof(char)*40); //reallocation --> data is copied
	strcpy(s_encode, s);
	s_encode[0] = "C";
	return s_encode;
}
int main()
{
	char s[] = "Hello", *s_encode;

	s_encode = encode(s);
	printf("%u\n", s_encode);
}