#include<stdio.h>

int main()
{
    int first,diff,n,i;
    printf("first diff n\n"); //Input is taken in this order
    scanf("%d%d%d",&first,&diff,&n);
    for(i=0;i<n-1;i++)
    {
        printf("%d, ",(first+(diff * i)));
    }
    printf("%d\n",(first+(diff * i)));
    return 0;
}