#include<stdio.h>

void main()
{
    int i=0;
    switch(i)       //integer expression following the keyword switch is evaluated
    {
        case 1:     //if case 1 is matched it executes the statements in case 1
            printf("In case 1 \n");
            break;      //statements of each case can be breaked by using 'break' statement
        case 2:
            printf("In case 2 \n");
            break;
        case 3:
            printf("In case 3 \n");
            break;
        default:
            printf("In default case");      //if no case satisfies the given condition then default case is executed
                                            //break statement is not required for default case
                        
    }
}

//Code by Steavo Babu