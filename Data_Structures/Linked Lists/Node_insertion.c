#include<stdio.h>
#include<stdlib.h>

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

void display(node *head)
{
    int count = 1;
    node *p;        //pointer p
    p=head;
    while(p!=NULL){     //this loop will execute till p reaches NULL
        printf("\nNode %d:\t%d\t%s\t%d",count,p->roll,p->name,p->age);
        count++;
        p=p->next;      //value of p changes to the next value till it becomes NULL
    }
    printf("\n");
}

void insert(node **head)
{
    int k=0,rno;
    node *p,*q,*new;
    new=(node *)malloc(sizeof(node));
    printf("\nData to be inserted:");
    scanf("%d%s%d",&new->roll,new->name,&new->age);
    printf("\nInsert before which roll number?(Enter -ve for inserting at end)");
    scanf("%d",&rno);
    p=*head;
    if(p->roll==rno){       //for inserting at the first node
        new->next=p;
        *head=new;
    }
    else{
        while((p!=NULL && p->roll!=rno)){
            q=p;                // q pointer would be always pointing to the previous node
            p=p->next;
        }   
        if(p==NULL){
            q->next=new;        //for inserting at the last node
            new->next=NULL;
        }
        else if(p->roll=rno){   
            q->next=new;            //for inserting in between
            new->next=p;
        }
    }
}
void main()
{
    node *head;
    head = create_list();
    insert(&head);      //address of head pointer is being passed
    display(head);      //pointer itself is passed as an argument
}

//Code by Steavo Babu