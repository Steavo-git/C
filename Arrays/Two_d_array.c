#include<stdio.h>

void main()
{
    //datatype arrayname [rows][coloumns];
	int tda[5][5] = { 10,11,12,130,14,15,16,7,18,19,220,21,22,23,24,25,26,
					  27,28,29,30,31,132,33,34},r,c,n;
    int found = 0,elem = 112;
	int big,small;
	

	for(r = 0;r<5;r++)
	{
		for(c = 0;c<5;c++)
			printf("%4d",tda[r][c]);
		printf("\n");
		
	}
}

//Code by Steavo Babu