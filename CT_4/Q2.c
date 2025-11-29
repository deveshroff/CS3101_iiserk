#include <stdio.h>
#include <string.h>

typedef struct dancer
{
    char name[50];
    int score;
    int pass;
} DANCER;

int main()
{
    char name[5][50] = {"A", "B", "C", "D", "E"}, wildcard[50];
    DANCER dancers[5];
    int i, r, s1, s2, s3, min, eliminated, max, winner;

    for(i = 0; i < 5; i++)
    {
        strcpy(dancers[i].name, name[i]);
        dancers[i].score = 0;
        dancers[i].pass = 0;
    }

    for(r = 1; r <= 3; r++)
    {
        printf("\n=== Beginning Round %d ===\n", r);

        for(i = 0; i < 5; i++)
        {
            if(dancers[i].pass == 0)
            {
                printf("Dancer performing: %s\n", dancers[i].name);
                printf("Enter 3 judge scores: ");
                scanf("%d %d %d", &s1, &s2, &s3);
                dancers[i].score = s1 + s2 + s3;
            }
        }

        min = 999999;
        eliminated = -1;

        for(i = 0; i < 5; i++)
        {
            if(dancers[i].pass == 0 && dancers[i].score < min)
            {
                min = dancers[i].score;
                eliminated = i;
            }
        }
        dancers[eliminated].pass = 1;
        printf("Eliminated: %s\n", dancers[eliminated].name);
    }
    printf("The eliminated Dancers are:\n");
    for(i = 0; i < 5; i++)
        {
            if(dancers[i].pass == 1)
            {
                printf("%s\n", dancers[i].name);
            }
        }
    printf("Choose wildcard\n");
    scanf("%s", wildcard);
    for(i = 0; i < 5; i++)
        {
            if(strcmp(dancers[i].name, wildcard) == 0)
            {
                dancers[i].pass = 0;
            }
        }
    printf("\n=== Beginning Final Round ===\n");
    for(i = 0; i < 5; i++)
        {
            if(dancers[i].pass == 0)
            {
                dancers[i].score = 0;
                printf("Dancer performing: %s\n", dancers[i].name);
                printf("Enter 3 judge scores: ");
                scanf("%d %d %d", &s1, &s2, &s3);
                dancers[i].score = s1 + s2 + s3;
            }
        }
    max = -1;
    winner = -1;

    for(i = 0; i < 5; i++)
    {
        if(dancers[i].pass == 0 && dancers[i].score > max)
        {
            max = dancers[i].score;
            winner = i;
        }
    }
    printf("Winner: %s\n", dancers[winner].name);
    
}