#include<stdio.h>

int main()
{
    int n,digit,repdigit=1;
    printf("Enter a number\n");
    scanf("%d",&n);
    digit=n%10;
    n = n%10;
    while(n>0)
    {
        if(n%10!=digit)
        {
            repdigit=0;
        }
        n= (n - n%10)/10;
    }
    if(repdigit==0 || n<0)
    {
        printf("false\n");
    }
    else
    {
        printf("true\n");
    }
    return 0;
}