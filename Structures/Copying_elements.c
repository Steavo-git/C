#include<stdio.h>
#include<string.h>

void main()
{
    struct employee
    {
        char name[10];int age;float salary;
    };

    struct employee x1={"Abel",25,50000};   //created a structure variable with values 
    struct employee x2,x3;      

    strcpy(x2.name,x1.name);    //for copying name(only) using strcpy ## name cannot be copied by using x2.name=x1.name ##
    x2.age=x1.age;
    x2.salary=x1.salary;
    x3=x2;      //contents can be also copied like this

    printf("%s %d  %f",x1.name,x1.age,x1.salary);
    printf("\n%s %d  %f",x2.name,x2.age,x2.salary);
    printf("\n%s %d  %f",x3.name,x3.age,x3.salary);

}

//Code by Steavo Babu