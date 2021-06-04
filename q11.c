#include<stdio.h>
#include<stdlib.h>

int main()
{
    char *word,*words[50];
    char pattern[20];
    int i,j,k,choice=1,flag,n=0,wl;

    i=0;
    printf("Enter word length\n");
    scanf("%d",&wl);//as pattern.length=words[i].length, thus all words are of the same length, which is the pattern's length
    if(wl<1 || wl>20)
    {
        printf("Invalid word length\n");
        return 0;
    }

    while(choice && i<50)
    {
        printf("Enter 1 to input a word or enter 0 to EXIT\n");
        scanf("%d",&choice);
        if(choice)
        {
            n++;
            words[i]=(char*)malloc(sizeof(char)*wl);
            printf("Enter word\n");
            scanf("%s",words[i]);
            getchar();
        }
        i++;
    }

    printf("Enter pattern\n");
    scanf("%s",pattern);

    for(i=0;i<n;i++) //n is the number of words entered
    {
        flag=1;
        word=words[i];

        for(j=0;j<wl;j++) 
        {
            for(k=j;k<wl;k++)
            {
                if( (word[k] == word[j]) && (pattern[k] != pattern[j]) ) //one letter cannot map to two letters
                {
                    flag=0;
                    break;
                }
                else if( (word[k] != word[j]) && (pattern[k] == pattern[j]) ) //two letters cannot map to the same letter
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
            {
                break;
            }
        }
        if(flag==1)
        {
            for(j=0;j<wl;j++)
            {
                printf("%c",word[j]);
            }
            printf(" ");
        }
    }
    printf("\n");
    return 0;
}