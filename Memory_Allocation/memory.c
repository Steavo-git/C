#include<stdio.h>
#include<stdlib.h>      //malloc function defination is contained in this header file 

int main()
{
    int n,*ptr,i,sum=0;     //pointer variable declared

    printf("Enter the number of elements:");
    scanf("%d",&n);

    ptr=(int*)malloc(n*sizeof(int));        //malloc function is used to dynamically allocate the memory    
                                            //in a single large block with the specified size 
                            //malloc() returns a pointer of type void which can be typecasted into a pointer of any form (int here)
                            //this function will allocate n*4 bytes of memory for int type

                            //if memory allocation is failed then the malloc()  will return a NULL pointer

    printf("Enter the array elements:");
    for(i=0;i<n;i++)
    {
        scanf("%d",ptr+i);         //ptr+i is the memory location in whch the element is to be stored 
        sum=sum+(*(ptr+i));         //ptr+i invloves pointer arithmetics 
                                    //the value of pointer increases/decreases by the size of the datatype stored
    }

    printf("\nSum=%d",sum);
    free(ptr);
    return 0;
}

//Code by Steavo Babu