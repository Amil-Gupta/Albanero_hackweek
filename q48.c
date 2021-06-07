#include<stdio.h>

int main()
{
    int n,i,j;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int in[n],out[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&in[i]);
    }
    for(i=0;i<n;i++)
    {
        out[i]=1;
        for(j=0;j<n;j++)
        {
            if(i==j)
            {
                continue;
            }
            out[i] *= in[j];
        }
    }
    if(n!=0)
    {
        printf("[ ");
        for(i=0;i<n-1;i++)
        {
            printf("%d, ",out[i]);
        }
        printf("%d ]\n",out[i]);
    }
    return 0;
}