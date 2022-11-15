#include<stdio.h>

void main()
{
    int a,b;
    printf("Enter two numbers:");
    scanf("%d%d",&a,&b);

    printf("\n %d < %d is  %d",a,b, a < b);
	printf("\n %d > %d is  %d",a,b, a > b);
	printf("\n %d == %d is  %d",a,b, a == b);   //this checks if the numbers are equal or not
	printf("\n %d != %d is  %d",a,b, a != b);   //not equal to operator

}

//Code by Steavo Babu