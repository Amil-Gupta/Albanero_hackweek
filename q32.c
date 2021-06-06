#include<stdio.h>

int main()
{
    int n,m=0,i,j,min;
    printf("Enter no. of elements in the array\n");
    scanf("%d",&n);
    int a[n],set[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=1;i<n;i++)
    {
        if(a[i]<min)
        {
            min=a[i];
        }
    }
    set[m++]=min;
    for(i=0;i<n;i++)
    {
        if(a[i]<=set[m-1])
        {
            continue;
        }
        min=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]<min && a[j]>set[m-1])
            {
                min=a[j];
            }
        }
        set[m++]=min;
    }
    printf("[ ");
    for(i=0;i<m-1;i++)
    {
        printf("%d, ",set[i]);
    }
    printf("%d ]\n",set[i]);
    return 0;
}