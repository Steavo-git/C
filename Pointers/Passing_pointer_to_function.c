#include<stdio.h>

void convert(int *ptr)
{
    *ptr=*ptr*2;        //pointer operation
}

//there was no need to return any value from this function because pointer has already changed the value in its memory location

void main()
{
    int a=10;
    printf("The current value is %d",a);
    convert(&a);
    printf("\nThe new value is %d",a);
}

//Code by Steavo Babu