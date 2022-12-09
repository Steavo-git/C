#include<stdio.h>

int main()
{
    int a=456;

    //datatype *pointername;
	int *ptr;   //an integer pointer variable has been declared using [*]

	ptr = &a;      //now this pointer holds the address of a , which means this pointer variable is pointing to a

    printf("%d",*ptr);  //this will print the content at ptr, which is pointing at variable 'a' , so content at a will be printed

	for(a = 1;a<=5;a++)
	{
		printf("\n%8d",*ptr);   //this will print the contents at subsequent memory locations
		ptr++;  //next memory locations
    }
    return 0;
}

//Code by Steavo Babu