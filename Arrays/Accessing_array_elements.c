//Accessing array elements in different ways

#include<stdio.h>

void main()
{
    int arr[]={23,55,87,90,6},i;
    for(i=0;i<=5;i++)
    {
        printf("\nAddress = %u",&arr[i]);
        printf("    Element = %3d %3d", arr[i], *(arr+1));
        printf("%3d %3d",*(i+arr),i[arr]);
    }
}

//Code by Steavo Babu