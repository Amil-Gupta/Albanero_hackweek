#include<stdio.h>

int main()
{
    int m,n,i,j,left;
    printf("Enter M <space> N\n");
    scanf("%d%d",&m,&n);
    int a[m][n];
    printf("Enter matrix elements\n");
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    left=m*n;
    i=0;
    while(left!=0)
    {
        for(j=i;j<n-i;j++)
        {
            printf("%d ",a[i][j]);
            left--;
        }
        if(left==0)
        {
            break;
        }
        for(j=i+1;j<m-i;j++)
        {
            printf("%d ",a[j][n-i-1]);
            left--;
        }
        if(left==0)
        {
            break;
        }
        for(j=n-i-2;j>=i;j--)
        {
            printf("%d ",a[m-i-1][j]);
            left--;
        }
        for(j=m-i-2;j>i;j--)
        {
            printf("%d ",a[j][i]);
            left--;
        }
        i++;
    }
    printf("\n");
    return 0;
}