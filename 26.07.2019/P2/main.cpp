#include <stdio.h>

using namespace std;

int main()
{
    int i,j;
    for(j=1;j<=5;j++)
    {
    for(i=5;i>j;i--)
        printf("  ");
    for(i=1;i<=j;i++)
        printf("* ");
    printf("\n");
    }
    return 0;
}