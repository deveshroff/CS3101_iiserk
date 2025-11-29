#include<stdio.h>
#include<string.h>

int IsSubstr(char *str1, char *str2, int len_1, int len_2)
{
	int i, j, pass = 1, sum = 0;
	for(j = 0; j < len_2; j++)
	{
		if(str1[0] == str2[j])
		{
			for(i = 0; i <len_1; i++)
			{
				sum += (str1[i] == str2[j + i]);
			}
			if(sum == len_1)
			{
				pass = 0;
				break;
			}
			else
			{
				pass = 1;
				sum = 0;
			}
		}
	}

	return pass;
}

int main()
{
	char str1[50] = "ayan", str2[50] = "maya", str3[50] = "Dwaipayan";
	int len_1, len_2, len_3;

	len_1 = strlen(str1);
	len_2 = strlen(str2);
	len_3 = strlen(str3);

	printf("%d\n", IsSubstr(str1, str3, len_1, len_3));
	printf("%d\n", IsSubstr(str2, str3, len_2, len_3));

}