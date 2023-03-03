#include<stdio.h>
#include<stdlib.h>

// menu driven program to perform stack operations using linkedlists

typedef struct nd 
{
    int data;
    struct nd *next;
}node;

node *top=NULL;

void push()
{
    node *new;
    new = (node*)malloc(sizeof(node));
    printf("Enter data to be inserted:\n");
    scanf("%d",&new->data);
    new->next=top;
    top=new;
}

void pop()
{
    node *item = top;
    if(top==NULL)
        printf("Stack is empty:\n");
    else
    {
        top=item->next;
        printf("Deleted item is :%d\n",item->data);
        free(item);    
    }
}

void display()
{
    node *p= top;
    if(p==NULL)
        printf("Stack is empty\n");
    else
    {
        printf("Stack data:");
        while(p!=NULL)
        {
            printf("%4d",p->data);
            p=p->next;
        }
        printf("\n");
    }
}


void peek()
{
    node *item =top;
    if(top==NULL)
        printf("Stack is empty\n");
    else
        printf("Top of the stack is %d\n",item->data);
}

int main()
{
    int ch;
    do
    {
        printf("Enter 1 for push\nEnter 2 for Pop\nEnter 3 for display\nEnter 4 for exit");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                push();
                break;
            case 2:
                pop();
                break;
            case 3:
                display();
                break;
            default:
                printf("Exit");
        }
    }while (ch!=4);

}

//Code by Steavo Babu