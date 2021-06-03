#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter number of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        a[i]++;
    }
    printf("[ ");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("]\n");
    return 0;
}