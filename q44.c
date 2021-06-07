#include<stdio.h>

int main()
{
    int n,i,prev;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int in[n],out[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&in[i]);
    }
    if(n>0)
    {
        if(n==1)
        {
            out[0]=in[0];
        }
        else
        {
            prev=in[0];
            for(i=0;i<n-1;i++)
            {
                out[i]=prev*in[i+1];
                prev=in[i];
            }
            out[i]=prev*in[i];
        }
        printf("[ ");
        for(i=0;i<n-1;i++)
        {
            printf("%d, ",out[i]);
        }
        printf("%d ]\n",out[i]);
    }
    return 0;
}