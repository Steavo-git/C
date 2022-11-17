#include<stdio.h>

void calcarea(int len,int bre)      //calcarea accepts the values of length and breadth and returns area back to main
{
	printf("\n Area = %d ",len * bre);
}

void main()
{
    int len,bre;

    printf("Enter the values of length and breadth:");
    scanf("%d%d",&len,&bre);

	calcarea(len,bre);
	
}

//Code by Steavo Babu

