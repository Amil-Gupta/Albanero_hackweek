#include<stdio.h>

int main()
{
    int n,i,out,r0,r1,r2;
    printf("Enter number of array elements\n");
    scanf("%d",&n);
    if(n<3)
    {
        printf("cannot find outlier\n"); //because there must be a majority of the other type, but for 1 or 2 elements we cannot tell if a number is an outlier
    }
    else
    {
        int a[n];
        printf("Enter array elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }
        r0=a[0]%2;
        r1=a[1]%2;
        r2=a[2]%2;
        // printf("%d%d%d",r0,r1,r2);
        out=-1;
        if(r0!=r1)
        {
            if(r1==r2)
            {
                out=a[0];
            }
            else
            {
                out=a[1];
            }
        }
        else if(r2!=r0)
        {
            out=a[2];
        }
        if(out==-1)
        {
            for(i=3;i<n;i++)
            {
                if(a[i]%2!=r0)
                {
                    out=a[i];
                    break;
                }
            }
        }
        if(out==-1)
        {
            printf("No outlier\n");
        }
        else
        {
            printf("%d\n",out);
        }
    }
    return 0;
}