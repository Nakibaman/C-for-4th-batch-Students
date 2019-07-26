#include <stdio.h>
#include <stdlib.h>

void print()
{
    printf("HI");
    print();
}
int main()
{
    print();

    return 0;
}
