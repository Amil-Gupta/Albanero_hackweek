#include<stdio.h>

int main()
{
    int n,mean=0,count=0;
    printf("Enter a number\n");
    scanf("%d",&n);
    while(n!=0)
    {
        mean += n%10;
        count++;
        n /= 10;
    }
    mean /= count;
    printf("%d\n",mean);
    return 0;
}