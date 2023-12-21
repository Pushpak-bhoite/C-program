#include <stdio.h>
#include <conio.h>
#include <string.h>
int main()
{
	int len1, len2, i, j, flag;
	char str1[20], str2[20];
	clrscr();
	printf("\n Enter two strings");
	gets(str1);
	gets(str2);
	len1 = strlen(str1);
	len2 = strlen(str2);
	if (len1 == len2)
	{
		for (i = 0; i < len1; i++)
		{
			flag = 0;
			for (j = 0; j < len1; j++)
			{
				if (str1[i] == str2[j])
				{
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				break;
			}
		}
		if (flag == 1)
			printf("\n Anagram");
		else
			printf("\n Not an Anagram");
	}
	else
	{
		printf("\n Not an anagram");
	}

	getch();
}