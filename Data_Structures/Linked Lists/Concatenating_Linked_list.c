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

node* concatenate(node *head1 , node *head2)
{
    node *p;    //p pointer
    p = head1;
    while(p->next!=NULL){       //loop to get the value of the last node in the first linked list
        p=p->next;
    }
    p->next=head2;      //the last node of first linked list then points towards the first node of the second linked list
                        // therby creating a new combined linked list
    return (head1);
}
void main()
{
    node *head1, *head2;
    head1 = create_list();
    head2 = create_list();
    display(head1);  
    display(head2);
    concatenate(head1,head2);
    display(head1);
}

//Code by Steavo Babu