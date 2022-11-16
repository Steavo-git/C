#include<stdio.h>

void main()
{
	int a,b,c;
    printf("Enter three numbers:");
    scanf("%d%d%d",&a,&b,&c);
	
	if(a < b)
		if( a < c)// a is the smallest
			if(b < c)
				printf("\n  %d  %d  %d ",a,b,c);
			else// c < b
				printf("\n  %d  %d   %d ",a,c,b);
		else// c < a  /// c is the smallest
			printf("\n  %d  %d   %d ",c,a,b);
            
	else//  b < a
		if( b < c)/// b is hte smallest
			if(a < c)
				printf("\n  %d %d  %d  ",b,a,c);
			else// c is < a
				printf("\n  %d  %d   %d ",b,c,a);
		else  // c is < b   // c is the smallest
			printf(" %d  %d  %d ",c,b,a);
	
}

//Code by Steavo Babu