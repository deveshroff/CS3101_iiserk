#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int absolute(int x);
int main()
{int number, guess = -1;
	srand(time(0));
	number = rand() % 20 + 1;
	while (guess != number){
		printf("Guess the number.\n");
		scanf("%d",&guess);
		if (guess == number){
			printf("Well done! The number was %d!\n",number);
		}
		else if (absolute(number - guess) < 5){
			printf("You're close!\n");
		}
		else {
			printf("You're far!\n");
		}

	}
	return 0;
}
int absolute(int x)
{
	if (x < 0){x = -x;}
	else {x = x;}
	return x;
}
