#include<stdio.h>

int calsum(int h,int k,int l)   //types of variables should be mentioned
{
    int sum;
    sum = h+k+l;    //performing the operation in function

    return sum;     //returning the final result back to main()
}

void main()
{
    int a,b,c,sum;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);

    sum = calsum(a,b,c);    //assigning sum from the return

    printf("The sum of the three number is %d",sum);
}

//Code by Steavo Babu