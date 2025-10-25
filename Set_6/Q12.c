#include<stdio.h>
#include<string.h>

typedef struct student{
	char name[20];
	char roll_no[10];
	float cgpa;
}STUD;

void search (STUD *student, char *id)
{
	int i, len;
	len = 2; //sizeof(student)/sizeof(STUD);

	for(i=0; i<len;i++)
	{
		if(strcmp(student[i].roll_no, id) == 0)
		{
			printf("CGPA is %.2f\n", student[i].cgpa);
			break;
		}
		else
		{
			//printf("Wrong roll number!\n");
		}
	}
}

int main()
{
	STUD student_1 = {"Devang", "23MS012", 9.19}, student_2 = {"Shreya", "23MS010", 9.5}, students[2];
	char id[10];

	students[0] = student_1;
	students[1] = student_2;

	printf("Enter the roll number good sir!\n");
	scanf("%s",id);

	search(students,id);

}