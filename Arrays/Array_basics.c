#include<stdio.h>

void main()
{
    //datatype arrayname[size] = {"x1,x2,x3,x4,x5"}
    int arr[5]= {1,2,3,4,5},i;      //declaring array


    for (i=0;i<5;i++)   //loop begins
    {

        printf("%3d",arr[i]);   //printing array using loop

    }
    printf("\n");

    for (i=4;i>=0;i--)
    {
        printf("%3d",arr[i]);       //printing array in reverse order
    }

}

//Code by Steavo Babu