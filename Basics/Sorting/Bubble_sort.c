#include<stdio.h>

void main()
{               //  0  1  2   3  4   
	int arr[5]  = { 45,87,12,80,23},p,temp,pass,c;
	
	printf("\n");
	for(c = 0;c<5;c++)
		printf("%4d",arr[c]);
	for(pass = 0;pass<3;pass++)
	{
		for(p = 0;p<5-1;p++)
		{
			if(arr[p+1] < arr[p])
			{
				temp = arr[p];          //bubble sort
				arr[p]  = arr[p+1];     //adjacent numbers are checked and shifted accordingly
				arr[p+1] = temp;        
			}
		}
		
		printf("\n");
		for(c = 0;c<5;c++)
			printf("%4d",arr[c]);
	}

}

//Code by Steavo Babu