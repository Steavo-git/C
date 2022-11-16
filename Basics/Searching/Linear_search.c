#include<stdio.h>

void main()
{
	int arr[6] = { 10, 20, 30,40,50, 60},temp,c,num,fl = 0;     // fl is a flag variable
    printf("Enter the element to be searched");
    scanf("%d",&num);

	for(c = 0;c<6;c++)// only to print the array
        printf("%4d",arr[c]);

	for(c = 0;c<6;c++)/// to go through all elements
	{
		if(arr[c] == num)
		{
			fl = 1;
			break;
		}
		
	}
    if (fl==1)
        printf("\n %d has been found",num);
    else
        printf("\n %d is not found",num);
}

//Code by Steavo Babu