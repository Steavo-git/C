#include<stdio.h>

void main()
{
	int i,a= 10,b = 20,c = 35,d = 50,e = 22,*arrptr[5];     //arraypointer 
	arrptr[0] = &a;
	arrptr[1] = &b;
	arrptr[2] = &c;
	arrptr[3] = &d;
	arrptr[4] = &e;
	for(i = 0;i<5;i++)
		printf("%4d",*arrptr[i]);   //printing values
}

//Code by Steavo Babu