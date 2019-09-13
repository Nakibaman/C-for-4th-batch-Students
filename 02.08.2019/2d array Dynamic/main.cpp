#include <cstdio>

using namespace std;

int main()
{
    int r,c;
    printf("Enter no of row-");
    scanf("%d",&r);
    printf("Enter no of col-");
    scanf("%d",&c);
    int a[r][c];
    int i,j;
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Elements from memory-\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    return 0;
}
