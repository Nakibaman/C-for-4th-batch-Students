#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i,j;
    for(i=1;i<=11;i++)
    {
        for(j=1;j<i;j++)
        {
            printf(" ");
        }
        for(j=11*2;j>=i*2;j=j-1)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
