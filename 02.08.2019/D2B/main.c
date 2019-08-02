#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n=19;
    int r;
    while(n!=0)
    {
        r=n%2;
        n=n/2;
        printf("%d",r);
    }
    return 0;
}
