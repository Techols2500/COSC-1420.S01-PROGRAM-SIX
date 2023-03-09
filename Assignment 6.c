/*
DESCRIPTION: Programming Excerise Six
CLASS: COSC 1420.SO1
AUTHOR: TYLER ECHOLS
DATE: Feb 2019
*/

#pragma warning (disable:4996)

#include <stdio.h>

#include <ctype.h>		
#include <string.h>	


void main()
{
	const	int		MaxNumChars=(81);
	char	Line[81 + 1];
	do {
		printf("Enter characters: ");
		gets_s(Line, 81);	//scanf("%s", Line);
		
		int count = 0;

		int len = strlen(Line);
		for (int i = 0; i < len; i++)
		{
			if (toupper(Line[i]) == toupper(Line[len - 1 - i]))
			{
				//cout << "Is a Palandrome " << endl;
				printf("%c==%c\n", Line[i], Line[len - 1 - i]);
			}
			else
			{
				//	cout << "Is not a Palandrome " << endl;
				printf("%c!=%c\n", Line[i], Line[len - i - 1]);
				count++;
				break;
			}

		}

		if (count >= 1)
		{
			printf("%s is not a palindrone\n", Line);
		}
		else
		{
			printf("%s is a palindrone\n", Line);
		}


		printf("You entered:      %s", Line);
		printf("The first character is %c\n", Line[0]);
		printf("The first character as uppercase is %c\n", toupper(Line[0]));
		printf("The first character as lowercase is %c\n", tolower(Line[0]));
	} while (strcmp(Line, "END") != 0);

	
	
}