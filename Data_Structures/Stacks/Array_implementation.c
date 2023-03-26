#include<stdio.h>

//implementing stacks using arrays
#define size 5
int stack[size];
int top=-1;

void push()
{
    int x;
    if(top==size-1)
    {
        printf("\nStack Overflow");
        return;
    }
    else
    {
        printf("\nEnter item to be inserted:");
        scanf("%d",&x);
        top=top+1;
        stack[top]=x;
    }
}

void display()
{
    if(top==-1)
        printf("\nStack is empty");
    else
    {
        printf("\nStack elements are:\n");
        for(int i=top;i>=0;i--)
            printf("%d\n",stack[i]);
    }
}

void pop()
{
    int x;
    if(top==-1)
        printf("\nStack Underflow!\n");
    else
    {
        x=stack[top];
        top--;
        printf("\nDeleted item is: %d",x);
    }
}

void peek() {   //function to print the 'top' value (the latest element added)
    if (top == -1) {
        printf("\n Empty Stack ");
    } else {
        printf("\nTop of the Stack : %d", stack[top]);
    }
}

int main()
{
    push();
    push();
    push();
    pop();
    push();
    display();
    return 0;
}

//Code by Steavo Babu