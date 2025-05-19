//Q.1 DEVELOP A PROGRAM THAT PRINTS THE GIVEN RIGHT HALF TRIANGLE PATTERN USING A NESTED LOOP

#include<stdio.h>

int main()
{
    int i, j;
    for(i=41; i<=45; i++)
    {
        for(j=41; j<=i; j++)
        {
            printf("%d ", j);
        }
        printf("\n");
        
    }
    return 0;
}