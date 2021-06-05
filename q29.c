#include<stdio.h>

int reverse(int n)
{
    int rev=0;
    while(n!=0)
    {
        rev=(rev*10)+(n%10);
        n /= 10;
    }
    return rev;
}

int sq_dig(int n)
{
    int d,sq,res=0;
    n=reverse(n);
    while(n!=0)
    {
        d=n%10;
        sq=d*d;
        if(sq<=9)
        {
            res=(res*10)+sq;
        }
        else
        {
            res=(res*100)+sq;
        }
        //digits 0-9 can have a square of at most 2 digits
        n=n/10;
    }
    return res;
}

int main()
{
    int n;
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("%d",sq_dig(n));
    return 0;
}