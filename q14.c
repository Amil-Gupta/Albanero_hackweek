#include<stdio.h>

int main()
{
    int n,i,j,min,temp;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        min=i;
        for(j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
    printf("[ ");
    for(i=0;i<n-1;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("%d ]\n",a[i]);
    return 0;
}