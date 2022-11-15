#include<stdio.h>

void main()
{
	int r,c;

	for(r = 1;r<=5;r++) // for repeating 5 times  for 5 rows
	{
		for(c = 1;c <= r;c++) // for repeating in a diagonal order
		{
			printf("%4d",c);
		}// 5 numbers printed
		printf("\n");
	}

}

//Code by Steavo Babu
