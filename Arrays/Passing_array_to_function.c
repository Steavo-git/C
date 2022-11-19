#include<stdio.h>

void display1(int m)        //call by value
{
    printf("%3d",m);
}

void display2(int *n)       // n is a pointer variable which points towards the address of the assigned variable
                            
{
    printf("%3d",*n);
}
void main()
{
    int i;
    int marks[]={55,66,55,44,45,89,87};
    for (i=0;i<=6;i++)
    {
        display1(marks[i]);     
    
    }
    printf("\n");
    for (i=0;i<=6;i++)
    {
        display2(&marks[i]);    //call by reference
    }
}

//Code by Steavo Babu