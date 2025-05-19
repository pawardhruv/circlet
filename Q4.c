// Q.4 DEVELOP A PROGRAMS THAT PRINTS THE GIVEN INVERTED LEFT HALF TRIANGLE PATTERN USING A NESTED LOOP ?

#include<stdio.h>
int main()
{
    
    int i, j, k;

    for(i=1; i<=5 ; i++)
    {
        for(k=1; k<=i; k++)
        {
                printf("  ");
        }
        for (j=1 ; j<=6-i ; j++)
        {
            if(j%2 == 0)
            {
                printf("0 ");
            }
            else
            {
                printf("1  ");
            }
                
        }
        printf("\n");
    }
       
}
