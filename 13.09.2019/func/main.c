#include <stdio.h>
#include <stdlib.h>

int main()
{
    int r1,c1;
    printf("Enter no of row-");
    scanf("%d",&r1);
    printf("Enter no of col-");
    scanf("%d",&c1);
    int a1[r1][c1];
    int i,j;
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            scanf("%d",&a1[i][j]);
        }
    }
    printf("Elements from memory-\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            printf("%d ",a1[i][j]);
        }
        printf("\n");
    }


    int r2,c2;
    printf("Enter no of row-");
    scanf("%d",&r2);
    printf("Enter no of col-");
    scanf("%d",&c2);
    int a2[r2][c2];
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            scanf("%d",&a2[i][j]);
        }
    }
    printf("Elements from memory-\n");
    for(i=0;i<r2;i++)
    {
        for(j=0;j<c2;j++)
        {
            printf("%d ",a2[i][j]);
        }
        printf("\n");
    }
    int a3[r1][c1];
    printf("Addition result is -\n");
    for(i=0;i<r1;i++)
    {
        for(j=0;j<c1;j++)
        {
            a3[i][j]=a1[i][j]+a2[i][j];
            printf("%d",a3[i][j]);
        }
        printf("\n");
    }

    return 0;
}
