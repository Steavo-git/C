#include<stdio.h>

void printtda(int tda[][4])
{
	printf("\n");
	for(int r = 0;r<4;r++)
	{
		for(int c = 0;c<4; c++)
			printf("%4d",tda[r][c]);
		printf("\n");
	}
}

void transpose(int tda[][4])
{
	int temp,r,c;
	for(r = 0;r<4;r++)
		for(c = 0;c<4;c++)
		{
			temp = tda[r][c];
			tda[r][c] = tda[c][r];
			tda[c][r] = temp;
		}
}

void main()

{
	int tda[4][4] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16};
	
	printf("Initial_Array\n");
	printtda(tda);
	transpose(tda);
	printf("\nAfter transposing\n");	
	printtda(tda);
	
}

//Code by Steavo Babu