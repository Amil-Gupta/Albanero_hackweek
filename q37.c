#include<stdio.h>

int main()
{
    int num,i,n;
    printf("Enter a number\n");
    scanf("%d",&num);
    int count[num+1];
    for(i=0;i<=num;i++)
    {
        count[i]=0;
        n=i;
        while(n!=0)
        {
            count[i] += n%2;
            n /= 2;
        }
    }
    printf("[ ");
    for(i=0;i<num;i++)
    {
        printf("%d, ",count[i]);
    }
    printf("%d ]\n",count[i]);
    return 0;
}