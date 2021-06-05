#include<stdio.h>

int main()
{
    int i,a[8],count=0;
    printf("Enter 7-digit binary number with spaces between the digits\n");
    for(i=0;i<7;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]==1)
        {
            count++;
        }
    }
    a[7]=count%2;
    for(i=0;i<8;i++)
    {
        printf("%d",a[i]);
    }
    printf("\n");
    return 0;
}