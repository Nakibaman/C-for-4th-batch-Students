#include <stdio.h>
#include <stdlib.h>

int print(int a)
{
    if(a==0)
        return 0;

    a=a-1;
    print(a);
    printf("%d\n",a);
}
int main()
{
    print(5);
    return 0;
}
