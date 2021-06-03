#include<stdio.h>

int main()
{
    int n,K,i,j,lpos0=-1,lmax=0,lcurr;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n],a1[n],pos0[n];
    for(i=0;i<n;i++)
    {
        pos0[i]=-1;//default value would be 0, which is a valid position
    }
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==0)
        {
            pos0[++lpos0]=i;
        }
    }
    printf("Enter K\n");
    scanf("%d",&K);
    for(i=0;i<n-K+1;i++)
    {
        for(j=0;j<n;j++) //sets values of a1 to original
        {
            a1[j]=a[j];
        }
        for(j=i;j<i+K && j<=lpos0;j++) //changes a set of K zeroes using a continuous set of positions stored in pos0[]
        {
            a1[ pos0[j] ]=1;
        }
        lcurr=0;
        for(j=0;j<n;j++) //finds maximum length of subarray consisting of consecutive 1's
        {
            if(a1[j]==1)
            {
                lcurr++;
            }
            else
            {
                if(lcurr>lmax)
                {
                    lmax=lcurr;
                }
                lcurr=0;
            }
        }
    }
    printf("%d\n",lmax);
    return 0;
}

//As skipping a 0 in between will lead to 2 subarrays, thus we can only get to maximum subarray length if we change zeroes without skipping