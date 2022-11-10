#include<stdio.h>

void main()
{
    int i,j;

    for (i=1;i<=2;i++) 

    {
        for(j=1;j<=2;j++)

        {
            if (i==j)

                continue;   //when continue is encountered in a loop..
                            //... control automatically passes to the beginning of the loop

            printf("%2d %2d\n",i,j);
        }
    }
}

//Code by Steavo Babu