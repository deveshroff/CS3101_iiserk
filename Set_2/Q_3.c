#include<stdio.h>
#include<math.h> 

int agent_002();
int agent_003();
int agent_005();
int agent_007();

int main()
{
	agent_002();
	agent_003();
	agent_005();
	agent_007();
	agent_002();
	agent_003();
	agent_005();
	agent_007();
	
}
int agent_002()
{
	static int pass_2 = 2;
	printf("The passcode is %d.\n", pass_2);
	pass_2 = pow(pass_2,2);
}
int agent_003()
{
	static int pass_3 = 3;
	printf("The passcode is %d.\n", pass_3);
	pass_3 = pass_3*3;
}
int agent_005()
{
	static int pass_5 = 5;
	printf("The passcode is %d.\n", pass_5);
	pass_5 = pass_5 + 5;
}
int agent_007()
{
	static int pass_7 = 7;
	printf("The passcode is %d.\n", pass_7);
	pass_7 = pow(pass_7,4);
}
