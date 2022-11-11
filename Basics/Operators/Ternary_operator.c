#include<stdio.h>

void main()
{
    int x,y,z;
    printf("Enter two numbers:");
    scanf("%d%d",&x,&y);

        // (condition ? (if true) : (if false))
    z=(x>y? 50 : 100);      // if x>y then z would get the value of 50 else 100

    printf("%d",z);

}

//Code by Steavo Babu