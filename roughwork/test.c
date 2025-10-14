// 22/8/25 - Lecture Notes - Local variables and their scope.
#include<stdio.h>

void f1();
void f2();
int main()
{
	int a = 12;
	printf("In main value of a = %d %p.\n",a, &a); //%p gives the memory location
	f1();
	f1();
	f2();
	f2();
}
void f1()
{
	int a = 12;
	a++;
	printf("In f1() value of a = %d %p.\n",a, &a);
}
void f2()
{
	static int a = 12; //now the variable has a different "special" memory location and value is retained across function calls.
	a++;
	printf("In f2() value of a = %d %p.\n",a, &a);
}
/*
int main() //In same scope you can't define same var twice.
int var = 12; //Global declaration
{
	//extern int var; //Extern mean GD is there, but afterwards
	printf("In main value of a = %d %p.\n",var, &var);
	{
		int var = 12;//If i dont define it here, it will use var from main.
		printf("In Block 1 value of a = %d %p.\n",var, &var);
		{
			int var = 12;
			printf("In Block 2 value of a = %d %p.\n",var, &var);
		}
		printf("In Block 1 value of a after block 2 = %d %p.\n",var, &var);
	}
	printf("In main value of a after block 1 = %d %p.\n",var, &var);
}
//int var = 12;
*/