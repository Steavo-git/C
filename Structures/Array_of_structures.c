#include<stdio.h>

struct book
{
        char name[20];int pages;float price;
};
struct book arr[2];  //this creates an array of structure variables 

void linkfloat()
{
    float a=0,*b;
    b=&a;
    a=*b;
}

void linkfloat();   //used to link float variables with structure

void main()
{
        
    int i;
    for (i=1;i<=2;i++)
    {
        printf("Enter name, pages and price\n");
        scanf("%s%d%f",&arr[i].name,&arr[i].pages,&arr[i].price);
    }

    for(i=1;i<=2;i++)
    {
        printf("\n%s\n%d\n%f\n",arr[i].name,arr[i].pages,arr[i].price);
    }
}

//Code by Steavo Babu