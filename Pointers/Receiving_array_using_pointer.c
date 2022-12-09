#include<stdio.h>

//printing array using pointer

void printarr(int *arr,int n)	//pointer variable points to the first element in the array
{
	int p;
	printf("\n");
	for(p = 0;p<n;p++)
		printf("%4d",p);
	printf("\n");
	for(p = 0;p<n;p++)
		printf("%4d",arr[p]);
}

void main()
{
	int arr[100],i,j,n;
	printf("Enter the number of elements:");
	scanf("%d",&n);
	printf("Enter elements:");
	for(i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	printarr(arr,n);
}

//Code by Steavo Babu