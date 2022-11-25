#include<stdio.h>

// sending a tda to a function

void inittda(int tda[][3])
{
	int num = 10,r,c;
	for(r =0;r<3;r++)
		for(c = 0;c<3;c++)
			tda[r][c] = num++;
}
void printtda(int tda[][3])
{
	int r,c;
	printf("\n");
	for(r = 0;r<3;r++)
	{
		for(c = 0;c<3;c++)
			printf("%4d",tda[r][c]);
		printf("\n");
	}
}

void main()
{
	int tda[3][3]={{1,2,3},{4,5,6},{7,8,9}};
	
	printtda(tda);

	inittda(tda);

	printtda(tda);

}

//Code by Steavo Babu