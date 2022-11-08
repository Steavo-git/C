#include<stdio.h>

void main()
{
    int r,c;

    //inital loop

    for (r=1 ;r<6;r++){
        //nested loop begins
        for (c =1 ; c<6;c++){

            printf("%3d",r);
        }
        printf("\n");   //to get the control on next line
    }
}

// Code by Steavo Babu