#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("How many number you want to remember:");
    scanf("%d",&n);
    int a[n];
    printf("Enter the numbers:");
    int i;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
    printf("Loading numbers from memory");
    for(i=0;i<n;i++)
        printf("%d\n",a[i]);
    return 0;
}
