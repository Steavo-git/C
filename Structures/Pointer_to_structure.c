#include<stdio.h>

struct student{
    int roll;
    char name[20];
    int marks;
};
struct student stu,*ptr;
void main()
{
    ptr=&stu;
    printf("Enter student details");
    scanf("%d%s%d",&stu.roll,&stu.name,&stu.marks);
    printf("Name =%s\t",(*ptr).name);       //used to fetch the content at name using pointer
                                        //here since [.] operator has higher precedence than * operator,*ptr should be enclosed in ()
    printf("Roll_no=%d\t",ptr->roll);     // this is called arrow operator used to fetch structure elemenys using pointers
    printf("Marks=%d",ptr->marks);
}

//Code by Steavo Babu