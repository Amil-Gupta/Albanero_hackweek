#include<stdio.h>

int main()
{
    int n,i,sum=0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    if(n>0)
    {
        printf("Enter array elements\n");
    }
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        sum=sum+a[i];
    }
    if(sum%2==0)
    {
        printf("even\n");
    }
    else
    {
        printf("odd\n");
    }
    return 0;
}