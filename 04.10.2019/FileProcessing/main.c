#include <stdio.h>
#include <stdlib.h>

int main()
{
    FILE *p;
    int marks[20]={0};
    int i,l;
    char c;
    l=0;
    p=fopen("test.txt","r");
    for (c = getc(p); c != EOF; c = getc(p))
        if (c == ' ')
            l = l + 1;

    p=fopen("test.txt","r");
    for(i=0;i<=l;i++)
    {
        fscanf(p,"%d",&marks[i]);
    }
    for(i=0;i<l;i++)
        printf("%d ",marks[i]);
    fclose(p);
    return 0;
}
