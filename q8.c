#include<stdio.h>

int main()
{
    int n,i,j,K,min,sum=0;
    printf("Enter no. of elements\n");
    scanf("%d",&n);
    int a[n];
    printf("Enter array elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Enter K\n");
    scanf("%d",&K);
    for(i=0;i<K;i++)
    {
        min=0;
        for(j=0;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        a[min] *= -1;
    }
    for(i=0;i<n;i++)
    {
        sum += a[i];
    }
    printf("%d",sum);
    return 0;
}

//The program inverts the minimum value present in the array K times
//If it is negative, then it wil become a positive integer and increase the sum
//If it is positive, then it will produce the least decrease in the sum among all values