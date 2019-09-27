#include <stdio.h>
#include <stdlib.h>

float fun1(int a,int b,int c)
{
    float d=(a*a+b*b+c*c)/2.0;
    return d;
}
void fun2(float e)
{
    printf("%f",e);
}
int main()
{
    fun2(fun1(1,2,3));
    return 0;
}

