#include<stdio.h>

int sod(int n) //sum of digits
{
    if(n==0)
    {
        return 0;
    }
    else
    {
        return (n%10) + sod(n/10);
    }
}

int main()
{
    int a[2];
    printf("Enter 2 numbers\n");
    scanf("%d%d",&a[0],&a[1]);
    if(sod(a[0]) == sod(a[1]))
    {
        printf("true\n");
    }
    else
    {
        printf("false\n");
    }
    return 0;
}