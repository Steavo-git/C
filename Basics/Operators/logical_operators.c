#include<stdio.h>

void main()
{
    int m1,m2,m3,m4,m5,per;
    printf("Enter the marks obtained in the 5 subjects:");
    scanf("%d",&m1,&m2,&m3,&m4,&m5);    //taking inputs from user using scanf
    per = ((m1+m2+m3+m4+m5)/500)*100;
    if (per>=60)
        printf("First Class");
    if ((per>=50 ) && (per<60))     // && represents 'and '
        printf("Second Class");     // || represents  'or'
    if ((per>=40) && (per<50))      
        printf("Third Class");
    if (per<40)
        printf("FAILED");
}

//Code by Steavo Babu