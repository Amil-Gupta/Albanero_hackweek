#include<stdio.h>

int main()
{
    int n,i,curr_depth=-1,max_depth=-1;
    printf("Enter maximum number of characters\n");
    scanf("%d",&n);
    char s[n];
    for(i=0;i<n;i++)
    {
        s[i]="";
    }
    printf("Enter string\n");
    getchar(); //as the extra character for newline was causing input problems
    scanf("%[^\n]s",&s);
    for(i=0;i<n;i++)
    {
        if(s[i]=='(')
        {
            curr_depth++;
        }
        else if(s[i]==')')
        {
            curr_depth--;
        }
        if(curr_depth>max_depth)
        {
            max_depth=curr_depth;
        }
    }
    //thought of adding a condition to check curr_depth=-1, but constraints say that s is guaranteed to be a VPS
    printf("%d\n",max_depth);
    return 0;
}
