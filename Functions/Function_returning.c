#include<stdio.h>

int changea(int a)
{ 
	a = a * 2;      //operation has been performed
	printf("\n In function value of a = %d ",a);
	return(a);      //value has been returned to main()
}

int main()
{       
	int a = 10;
	printf("\n The original value  of a is %d ",a);
	
	a = changea(a);     //here the returned value from function is allotted to variable 'a'
	printf("\n The new value of a is %d ",a);
    return 0;
}

//Code by Steavo Babu