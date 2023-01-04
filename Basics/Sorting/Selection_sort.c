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
        min=pass;                   //min is a variable which stores the index of the minimum value element
        for(j=pass+1;j<n;j++){      //j variable for going through the array starting 1 more than pass
            if(arr[j]<arr[min]){    //if any element is found less than less than number at index min ,then
                min=j;               //min gets the index of new smaller value
            }
        }
        if(min!=pass){               // now the values at pass and  min are swapped    
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