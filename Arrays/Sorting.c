#include<stdio.h>

//Sorting an array and finding the smallest number
void printarr(int arr[])
{
	int i;
	printf("\n");
	for(i = 0;i<7;i++)
		printf("%4d",arr[i]);
	printf("\n");
	for( i = 0;i<7;i++)
		printf("%4d",i);
}
void main()
{
	int arr[7] = { 34, 98, 12, 38, 40, 50, 8},small, sp,temp,pass,p;
	printf("Before sorting");
	printarr(arr);
	for(pass = 0;pass <=2;pass++)
	{
		small = arr[pass];
		sp = pass;
		for(p = pass +1;p<7;p++)	
			if(arr[p] < small)
			{
				small = arr[p];		//smallest number will be assigned here
				sp = p;
			}
		// printarr(arr);
		//printf("\n Small = %d at Position = %d ",small,sp);
		temp = arr[sp];
		arr[sp] = arr[pass];
		arr[pass] = temp;
		//printf("After Sorting");
		//printarr(arr);
	}
	printf("\nAfter Sorting");
	printarr(arr);
}

//Code by Steavo Babu