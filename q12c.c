#include<stdio.h>

int main()
{
    char s[500],s1[500];
    int i,l,l1=0;
    int count[26];
    printf("Enter string\n");
    scanf("%[^\n]s",s);
    for(l=0; s[l]>='a' && s[l]<='z' ;l++); //finds string length
    for(i=0;i<26;i++)
    {
        count[i]=0;
    }
    for(i=0;i<l;i++)
    {
        count[s[i] - 'a'] += 1;
    }
    i=0;
    while(l>0)
    {
        if(i==25)
        {
            while(i>=0 && l>0)
            {
                if(count[i]>0)
                {
                    s1[l1++]='a' + i;
                    count[i]--;
                    l--;
                }
                i--;
            }
            i=0;
        }
        else if(i==0)
        {
            while(i<26 && l>0)
            {
                if(count[i]>0)
                {
                    s1[l1++]='a' + i;
                    count[i]--;
                    l--;
                }
                i++;
            }
            i=25;
        }
    }
    for(i=0;i<l1;i++)
    {
        printf("%c",s1[i]);
    }
    printf("\n");
    return 0;
}