#include<stdio.h>
#include<stdlib.h>
//A linked list is a data structure which can change during execution 
//Successive elements are connected by Pointer
//Last element points to NULL

typedef struct student{
    int roll;
    char name[25];
    int age;
    struct student *next;     //pointer (next) of type struct to access to the next members to the list
}node;

node *create_list()         //function of return type (node)
{
    int k,n;
    node *p,*head;          //2 pointers of type node declared
    printf("\nEnter the number of elements:");
    scanf("%d",&n);
    for(k=0;k<n;k++){
        if(k==0){   
            head = (node*)malloc(sizeof(node));     //creating the first node using malloc function
            p=head;            // p will also point to head now 
        }
        else{
            p->next=(node*)malloc(sizeof(node));     // this creates the next node which is linked with the first node
            p=p->next;          // p then points to the next node after first
        }
        scanf("%d%s%d",&p->roll,p->name,&p->age);
    }
    p->next = NULL;     //after all the iterations the link of the last node will contain NULL
    return(head);       // head will be returned as this function has return type node
}
void main()
{
    node *head;
    head = create_list();
}

//Code by Steavo Babu