#include<stdio.h>

int main()
{
    int n,i,j,min,current,count=0;
    printf("Enter array size\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    min=a[0];
    for(i=0;i<n;i++) //starting from 0th position because we are counting occurences inside 
                    //and if a[0] is the minimum, we would miss an occurence if we start from 1st position
    {
        if(a[i]<min)
        {
            min=a[i];
            count=1;
        }
        else if(a[i]==min)
        {
            count++;
        }
    }
    printf("%d->%d\n",min,count);
    for(i=0;i<n;i++)
    {
        if(a[i]<=min)
        {
            continue;
        }
        count=0;
        current=a[i];
        for(j=0;j<n;j++)
        {
            if(a[j]<=min)
            {
                continue;
            }
            else if(a[j]<current)
            {
                current=a[j];
                count=1;
            }
            else if(a[j]==current)
            {
                count++;
            }
        }
        printf("%d->%d\n",current,count);
        min=current;
    }
    return 0;
}