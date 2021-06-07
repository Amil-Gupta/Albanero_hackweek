#include<stdio.h>

int main()
{
    int r,c,i,j;
    printf("Enter size( rows <space> columns )\n");
    scanf("%d%d",&r,&c);
    int m[r][c];
    printf("Enter matrix elements\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    printf("row\tcolumn\tvalue\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(m[i][j] != 0)
            {
                printf("%d\t%d\t%d\n",i,j,m[i][j]);
            }
        }
    }
    return 0;
}