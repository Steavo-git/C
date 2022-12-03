#include<stdio.h>

void main()
{
    //struct structurename
    struct book
    {
        //structure elements of different datatypes
        char name[30];int pages; float price;
    };
    //structure variables
    struct book b1,b2,b3;

    printf("Enter names,no of pages and price of the 3 books\n");

    scanf("%8s%6d   %8f",&b1.name,&b1.pages,&b1.price);   //accessing structure elements with structure variables using [.] operator

    printf("The following has been entered\n");
    
    printf("%8s%6d   %f",b1.name,b1.pages,b1.price); 
    
}

//Code by Steavo Babu