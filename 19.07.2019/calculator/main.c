#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b,c;
    printf("Enter first integer:");
    scanf("%d",&a);
    printf("Enter second integer:");
    scanf("%d",&b);
    n:
    printf("\n Here are the options \n 1-Addition \n 2-Subtraction \n 3-Multiplication \n 4-Division\n5-Exit");
    scanf("%d",&c);
    if(c==1)
        ;///+
    else if(c==2)
       ;///-
    else if(c==3)
       ;///*
    else if(c==4)
       ;///div
    else if(c==5)
        return 0;
    else
        {printf("Invalid input");goto n;}

}
