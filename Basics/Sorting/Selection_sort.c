#include<stdio.h>

void main()
{
    int arr[20],i,j,pass,min,temp,n;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    printf("Enter elements:");
    for(i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(pass=0;pass<n-1;pass++){
        min=pass;
        for(j=pass+1;j<n;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        if(min!=pass){
            temp=arr[min];
            arr[min]=arr[pass];
            arr[pass]=temp;
        }
    }
    printf("\nSorted array");
    for(int k=0;k<n;k++)
        printf("%4d",arr[k]);
}

//Code by Steavo Babu