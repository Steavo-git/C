#include<stdio.h>

void main()
{
    int tda[3][3]={{1,2,3},{4,5,6},{7,8,9}},c,found=0,elem=5,r,small,big;
    // to check for an element
	for(r = 0;r<5;r++)
	{
		for(c = 0;c<5;c++)
		{
			if(tda[r][c] == elem)// element is found
			{
				found = 1;
				break;
			}
		}
	
		if(found == 1)
			break;
	}

	if(found == 1)
		printf("\n Element %d is found at row = %d and col = %d ",elem,r,c);
	else
		printf("\n Elem %d is not found in the tda",elem);


}

//Code by Steavo Babu