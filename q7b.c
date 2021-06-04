#include<stdio.h>

int main()
{
    int n,K,i,j,lmax=0,lcurr=0,count0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter K\n");
    scanf("%d",&K);
    for(i=0;i<n;i++)
    {
        count0=0;
        if(a[i]==1)
        {
            lcurr++;
        }
        else
        {
            for(j=i;j<n && count0<=K;j++)
            {
                if(a[j]==0)
                {
                    count0++;
                }
            }
            lcurr+=j-i-1;
            if(lcurr>lmax)
            {
                lmax=lcurr;
            }
            lcurr=0;
        }
    }
    printf("%d\n",lmax);
    return 0;
}