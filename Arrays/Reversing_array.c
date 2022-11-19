#include<stdio.h>

void main()
{
	int arr[6] = { 10, 20, 30,40,50, 60},temp,c;
	
	printf("Initial Array\n");
	for(c = 0;c<6;c++)
		printf("%4d",arr[c]);
	printf("\nFinal Array");
	for(c = 0;c<6/2;c++)	//  len(arr)/2 should be used to reverse the array
	{
		// logic for reversing
		temp = arr[c];			
		arr[c] = arr[6-1-c];
		arr[6-1-c] = temp;
	}
	printf("\n");
	for(c = 0;c<6;c++)
		printf("%4d",arr[c]);
	
}

//Code by Steavo Babu