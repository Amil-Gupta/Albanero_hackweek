#include<stdio.h>
#include<stdbool.h>

int main()
{
    int size,n,i,j;
    printf("Enter no. of elements\n");
    scanf("%d",&size);
    int arr[size];
    printf("Enter array elements\n");
    for(i=0;i<size;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Enter a number\n");
    scanf("%d",&n);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
        {
            if(arr[i]+arr[j]==n && j!=i)
            {
                printf("true\n");
                return 0;
            }
        }
    }
    printf("false");
    return 0;
}