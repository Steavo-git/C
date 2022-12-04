#include<stdio.h>

void main()
{
    struct address  //created a structure 'address'
    {
        char phone[10];char city[20];int pin;
    };
    struct employee
    {
        char name[20];struct address a;     //used 'address' as a structure element in structure 'employee'  
                                            //also created a structure variable of address named a
    };
    struct employee e ={"Alvin","78575","Bhopal",504};  //created a structure variable of employee

    printf("Name=%s, phone=%s\n",e.name,e.a.phone);     //printed all the values
                                                        //to access the element of a structure inside a structure ,
                                                        // the [.] operator should be used twice 
    printf("City =%s, pin=%d\n",e.a.city,e.a.pin);

}

//Code by Steavo Babu