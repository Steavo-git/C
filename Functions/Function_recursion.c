#include<stdio.h>

int rsum(int num)       //recursive function defined
{
    int i,sum=0,rem;
    for (num;num>0;num=num/10)
    {
        rem=num%10;
        sum = rem + rsum(num/10);   //recursion used
        return sum;     //returning value back to main
    }
}

void main()
{
    int num,sum;
    printf("Enter the number");
    scanf("%d",&num);
    sum = rsum(num);
    printf("The sum of digit is %d ",sum);

}

//Code by Steavo Babu