#include <stdio.h>

int swap(int *a,int *b){    //for swapping
    int temp = *a;
    *a =*b;
    *b = temp;
}

int partition(int arr[],int l,int h){      //for creating a partiopn in the array using a pivot element
    int pivot = arr[h];  //we took last elements as the pivot
    int i = l-1;

    for(int j= l;j<=h-1;j++)
    {
        if(arr[j]<=pivot){
            i++;
            swap(&arr[i],&arr[j]);
        }
    } 
    swap(&arr[i+1],&arr[h]);
    return i+1;           //returns the correct position of pivot in the final sort
}

int quicksort(int arr[],int l,int h)
{

    if(l<h){
        int pivot = partition(arr,l,h);
        quicksort(arr,l,pivot-1);
        quicksort(arr,pivot+1,h);
    }
}

int main()
{
    
    int arr[100],n;
    printf("Enter the number of elements:");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        scanf("%d",&arr[i]);

    quicksort(arr,0,n-1);

    for(int i = 0;i<n;i++){
        printf("%5d",arr[i]);
    }
}

//Code by Steavo Babu