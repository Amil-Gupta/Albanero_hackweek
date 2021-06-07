#include<stdio.h>

int main()
{
    int n,i,j,k,min,temp;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    if(n!=0)
    {
        int a[n];
        printf("Enter array elements\n");
        for(i=0;i<n;i++)
        {
            scanf("%d",&a[i]);
        }

        for(i=0;i<n;i++) //sorting the array for simpler detection and output
        {
            min=i;
            for(j=i+1;j<n;j++)
            {
                if(a[j] < a[min])
                {
                    min=j;
                }
            }
            temp=a[i];
            a[i]=a[min];
            a[min]=temp;
        }

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                for(k=j+1;k<n;k++)
                {
                    if(a[k] - a[j] == a[j] - a[i])
                    {
                        printf("%d %d %d\n",a[i],a[j],a[k]);
                    }
                }
            }
        }
    }
    return 0;
}