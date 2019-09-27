#include <stdio.h>
#include <stdlib.h>

float sin_fun(int angle)
{
    if(angle==0)
        return 0.0;
    else if(angle==90)
        return 1.0;
    else if(angle==30)
        return 0.5;
}
int main()
{
    printf("%f",sin_fun(0));
    return 0;
}
