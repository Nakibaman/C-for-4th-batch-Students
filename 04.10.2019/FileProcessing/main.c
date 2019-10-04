#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int marks[5]={0};
    int i;
    p=fopen("test.txt","r");
    for(i=0;i<=4;i++)
        fscanf(p,"%d",&marks[i]);
    for(i=0;i<=4;i++)
        printf("%d ",marks[i]);
    fclose(p);
    return 0;
}
