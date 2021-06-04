#include<stdio.h>

int main()
{
    char s[500],s1[500];
    char smin,smax;
    int i,pos,minmax,l,l1=0;
    printf("Enter string\n");
    scanf("%[^\n]s",s);
    for(l=0; s[l]>='a' && s[l]<='z' ;l++); //finds string length
    while(smin!='/')
    {
        smin='/';
        for(i=0;i<l;i++)
        {
            if(s[i]=='/')
            {
                continue;
            }
            if(smin=='/')
            {
                smin=s[i];
                smax=s[i];
            }
            else
            {
                if(s[i]<smin)
                {
                    smin=s[i];
                }
                if(s[i]>smax)
                {
                    smax=s[i];
                }
            }
        }
        if(smax==smin && smin!='/') //all remaining characters are equal, so we need to simply fill them(as demonstrated in the example)
        {
            for(i=0;i<l;i++)
            {
                if(s[i]=='/')
                {
                    continue;
                }
                else
                {
                    s1[l1++]=s[i];
                    s[i]='/';
                }
            }
        }
        else if( (l1==0) || (s1[l1-1]<=smin) )
        {
            while(s1[l1]!=smax) //smax is the current highest character (between a and z) in the string
            {
                minmax=-1;
                for(i=0;i<l;i++)
                {
                    if(s[i]=='/')
                    {
                        continue;
                    }
                    else if(minmax==-1)
                    {
                        minmax=i;
                    }
                    else if( (s[i]<s[minmax]) && (s[i]>s1[l1-1] || l1==0) )
                    {
                        minmax=i;
                    }
                }
                s1[l1++]=s[minmax];
                s[minmax]='/';
            }
        }
        else if( s1[l1-1]>=smax )
        {
            while(s1[l1]!=smin) //smin is the current lowest character (between a and z) in the string
            {
                minmax=-1;
                for(i=0;i<l;i++)
                {
                    if(s[i]=='/')
                    {
                        continue;
                    }
                    else if(minmax==-1)
                    {
                        minmax=i;
                    }
                    else if( (s[i]>s[minmax]) && (s[i]<s1[l-1]) )
                    {
                        minmax=i;
                    }
                }
                s1[l1++]=s[minmax];
                s[minmax]='/';
            }
        }
    }
    for(i=0;i<l;i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");
    return 0;
}