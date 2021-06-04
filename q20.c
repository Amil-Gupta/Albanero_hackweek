#include<stdio.h>

int main()
{
    int i,j,max,temp,mpt=0;
    int a[10];
    printf("Enter 10 numbers\n");
    for(i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<10;i++)
    {
        max=i;
        for(j=i+1;j<10;j++)
        {
            if(a[j]>a[max])
            {
                max=j;
            }
        }
        temp=a[max];
        a[max]=a[i];
        a[i]=temp;
    }
    for(i=0;i<5;i++)
    {
        mpt+=a[i]; //mpt=maximum possible total
    }
    printf("%d\n",mpt);
    return 0;
}