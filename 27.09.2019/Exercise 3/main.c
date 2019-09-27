#include <stdio.h>
#include <stdlib.h>

float fun1(int a,int b,int c)
{
    float d=(a*a+b*b+c*c)/2.0;
    return d;
}
void fun2(int a,int b,int c)
{
    printf("%f",fun1(a,b,c));
}
int main()
{
    fun2(1,2,3);
    return 0;
}
