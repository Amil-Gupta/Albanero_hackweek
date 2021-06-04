#include<stdio.h>

int main()
{
    int n,i,size=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    int factors[n];
    for(i=1;i<=n;i++)
    {
        if(n%i == 0)
        {
            factors[size++]=i;
        }
    }
    printf("[ ");
    for(i=0;i<size-1;i++)
    {
        printf("%d ",factors[i]);
    }
    printf("%d ]\n",factors[i]);
    return 0;
}