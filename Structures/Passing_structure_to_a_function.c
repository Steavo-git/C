#include<stdio.h>

struct book //declaring structure
{
    char name[20];          //creating structure
    char author[20];
    int pages;
};
struct book b1={"Three Men in a Boat","JKJ",45};    //creating structure variable
                // #structure variable should be strictly global variable #
                // it should be declared outside main function for passing it into another function

void display(char *n,char *a,int pg)   
{
    printf("\n%s  %s%4d",b1.name,b1.author,b1.pages);
}

void display1(struct book b1) // accepting structure variable of type struct book
{
    printf("\n%s  %s%4d",b1.name,b1.author,b1.pages);
}

void display2(struct book *pg)  //address of b1 has been passed is collected in structure pointer pg
{
    printf("\n%s  %s%4d",pg->name,pg->author,pg->pages);  //pg->name represents the content at name memnber of pg pointer which contains the addrres of b2 elements
}

void main()
{
    display(b1.name,b1.author,b1.pages);
    display1(b1);   //structure varible passed by value 
    display2(&b1);  //structure varible passed by reference
}

//Code by Steavo Babu