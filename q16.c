#include<stdio.h>

int main()
{
    int i,n,count[]={0,0};
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]>0) //0 is not positive
        {
            count[0]++;
        }
        else if(a[i]<0)
        {
            count[1]+=a[i];
        }
    }
    printf("[ ");
    if(n!=0)
    {
        printf("%d, %d ",count[0],count[1]);
    }
    printf("]\n");
    return 0;
}