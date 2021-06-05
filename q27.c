#include<stdio.h>

int main()
{
    int i, num, length;
    printf("Enter:\nnum length\n");
    scanf("%d%d",&num,&length);
    int a[length];
    for(i=0;i<length;i++)
    {
        a[i]=num*(i+1);
    }
    printf("[ ");
    for(i=0;i<length-1;i++)
    {
        printf("%d, ",a[i]);
    }
    printf("%d ]",a[i]);
    return 0;
}