#include <stdio.h>
#include <stdlib.h>

float add(int a,float b)
{
    float c;
    c=a+b;
    return c;
}

int main()
{
    printf("%.4f",add(23,100.19));
    return 0;
}
