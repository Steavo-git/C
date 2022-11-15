#include<stdio.h>

void main()
{
	int r,c;

	for(r = 1;r<=9;r++)
	{
		for(c = 1;c<=9;c++)
		{
			if(r == 5|| c == 1|| c== 9 || c == r || r + c ==  10)
	    //		if(r == 1 && c <= 5 || c == 5 || r == 9 && c >= 5)
				printf("%02d",c);
			else
				printf("  ");
		}
		printf("\n");
	}

}

//Code by Steavo Babu