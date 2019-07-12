#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    a=2;
    b=6;
    c=-1;
    if(a>b&&a>c)
        printf("a is biggest");
    else if(b>a&&b>c)
        printf("b is biggest");
    else
        printf("c is biggest");
    return 0;
}
