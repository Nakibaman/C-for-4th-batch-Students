#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a[50],n,duplicate_count=0,i,j;

    printf("Enter how many Numbers:");
    scanf("%d",&n);
    printf("Enter Elements:");
    for( i=0;i<n;i++)
        scanf("%d",&a[i]);


    for( i=0;i<n;i++)
    {
        duplicate_count=0;
        for( j=i+1;j<n;j++)
        {
            if(a[i]==a[j])
                duplicate_count++;
        }
        if(duplicate_count!=0)
            printf("%d ",a[i]);
    }
    return 0;
}
