#include<stdio.h>

int main()
{
    int n,i;
    printf("Enter no. of characters\n");
    scanf("%d",&n);
    char s[n];
    for(i=0;i<n-1;i++)
    {
        s[i]='a';
    }
    if(n%2==0)
    { 
        s[i]='b';
    }
    else
    {
        s[i]='a';
    }
    for(i=0;i<n;i++)
    {
        printf("%c",s[i]);
    }
    printf("\n");
    return 0;
}