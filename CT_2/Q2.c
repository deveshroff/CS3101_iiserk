#include<stdio.h>
#include<string.h>

typedef struct student{
	char name[20];
	char major[20];
	int id;
	float cgpa;
	
}STUDENT;

int retMaxID (STUDENT *student, char *major) //Big O for retmaxId is n^3, since in the second for loop, we have an if condition to first check major and then check with maximum.
{
	int i, len, max = -1, index = -1, search = -1;
	len = 10; 
	for(i=0; i<len;i++) // to check whether the major exits or not
	{
		if(strcmp(student[i].major, major) == 0)
		{
			search += 1;
		}
	}	
	for(i=0; i<len;i++)
	{
		if(strcmp(student[i].major, major) == 0)
		{
			if(max <= student[i].cgpa)
			{
				max = student[i].cgpa;
				index = i;
			}
			
		}
		
	}
	
	if(search != -1)
	{
		return student[index].id;
	}
	else
	{
		return search;
	}
}

int main()
{
	STUDENT students[10], student_1 ={"Devang","DPS",12,9.19}, student_2 = {"Manish","DPS",34,8.88}, student_3 ={"Ruturaj","DPS",67,8.10}, student_4 ={"Vedshree","DCS",43,7.23}, student_5 ={"Rishabh","DPS",10,6.89}, student_6 ={"Nandita","DBS",77,7.90}, student_7 = {"Janu","DBS",99,5.50}, student_8 = {"Devansh","DCS",45,9.20}, student_9 = {"Albin","DBS",90,6.69}, student_10 ={"Adithya","DPS",101,8.23};
	char major_key[10];
	students[0] = student_1;
	students[1] = student_2;
	students[2] = student_3;
	students[3] = student_4;
	students[4] = student_5;
	students[5] = student_6;
	students[6] = student_7;
	students[7] = student_8;
	students[8] = student_9;
	students[9] = student_10;
	
	printf("Enter the Major good sir!\n");
	scanf("%s",major_key);
	printf("Student Id with max CGPA in %s is %d\n", major_key, retMaxID(students, major_key));

}

