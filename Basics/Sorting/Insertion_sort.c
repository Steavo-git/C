#include<stdio.h>

void main()
{
    int arr[100],i,j,key,n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(int k=0;k<n;k++)
        scanf("%d",&arr[k]);

    for(i=1;i<n;i++)        //starting loop from index 1
    {
        key=arr[i];         //key value is assigned
        j=i-1;              //j variable is less than i 

        while(j>=0 &&arr[j]>key){       //this loop runs till j>=0 and the value at j becomes greater than the key value
            arr[j+1]=arr[j];        //assigning values
            j--;        
        }
        arr[j+1]=key;           //inserting the value stored in key 
    }
    for(int k=0;k<n;k++)
        printf("%3d",arr[k]);
}

//Code by Steavo Babu