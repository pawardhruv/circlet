// Q.7 DEVELOP A PROGRAM THAT PRINTS THE GIVEN CUSTOM ALPHABETIC PATTERN USING A NESTED FOR LOOP ?
#include<stdio.h>
int main()
{
    
    for(int i=1; i<=5; i++)
    {
        for(int j=1; j<=5; j++)
        {
            if ( i==1 || i==3 || j==1 )
            {
                printf("* ");
            }
            if ( i==2 )
            {
                if(j==5)
                {
                    printf("* ");
                }
                else
                {
                    printf("  ");
                }
            }
        }
        printf("\n");
        
    }
    return 0;
}