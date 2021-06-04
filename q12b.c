#include<stdio.h>

int main()
{
    char s[500],s1[500];
    int i,j,min,l,l1;
    char temp;
    printf("Enter string\n");
    scanf("%[^\n]s",s);
    for(l=0; s[l]>='a' && s[l]<='z' ;l++); //finds string length
    for(i=0;i<l-1;i++)
    {
        min=i;
        for(j=i+1;j<l;j++)
        {
            if(s[j]<s[min])
            {
                min=j;
            }
        }
        temp=s[i];
        s[i]=s[min];
        s[min]=temp;
    }
    s1[0]=s[0];
    for(i=0;i<l-1;i++)
    {
        s[i]=s[i+1];
    }
    l--;
    l1=1;
    while(l!=0)
    {
        if(s[0]==s[l-1]) //no loop required as external loop is already running till l!=0
        {
            s1[l1++]=s[0];
            l--;
        }
        else if(s1[l1-1]<=s[0])
        {
            i=0;
            while(s1[l1]<s[l-1] && i<l)
            {
                if(s1[l1-1]!=s[i])
                {
                    s1[l1++]=s[i];
                    for(j=i;j<l-1;j++)
                    {
                        s[j]=s[j+1];
                    }
                    l--;
                }
                i++;
            }
        }
        else if(s1[l1-1]>=s[l-1])
        {
            i=l-1;
            while(s1[l1-1]>s[0] && i>=0)
            {
                if(s1[l1-1]!=s[i])
                {
                    s1[l1++]=s[i];
                    for(j=i;j<l-1;j++)
                    {
                        s[j]=s[j+1];
                    }
                    l--;
                }
                i--;
            }
        }
    }
    for(i=0;i<l1;i++)
    {
        printf("%c",s1[i]);
    }
    return 0;
}