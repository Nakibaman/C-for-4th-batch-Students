#include <stdio.h>
#include <stdlib.h>
int main()
{
    int a,b,c;
    scanf("%d",&a);
    scanf("%d",&b);
    scanf("%d",&c);
    if(a>b&&a>c)
        printf("a is biggest");
    else if(b>a&&b>c)
        printf("b is biggest");
    else if(c>a&&c>b)
        printf("c is biggest");
    else if(a==b && b==c)
        printf("a,b and c are equal");
    return 0;
}
