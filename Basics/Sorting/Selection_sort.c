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
    for(pass=0;pass<n-1;pass++){    //pass  from 0 to n-1
        min=pass;                   //min is a variable which stores a different index
        for(j=pass+1;j<n;j++){      //j variable for going through the array starting 1 more than pass
            if(arr[j]<arr[min]){    //if adjacent element to the right is less than the number then 
                min=j;               //min gets the value of j
            }
        }
        if(min!=pass){               // now if min and pass values are not same then the values at arr[min] and arr[pass]    
            temp=arr[min];          //gets swapped with each other 
            arr[min]=arr[pass];
            arr[pass]=temp;
        }
    }
    printf("\nSorted array");
    for(int k=0;k<n;k++)
        printf("%4d",arr[k]);
}

//Code by Steavo Babu