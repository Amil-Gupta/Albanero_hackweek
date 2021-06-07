#include<stdio.h>

int main()
{
    int n,i,j,prod,permutations=1;
    printf("Enter no. of steps\n");
    scanf("%d",&n);
    for(i=1;i<=n/2;i++)
    {
        prod=1;
        for(j=i;j<i*2;j++)
        {
            prod *= n-j;
        }
        permutations += prod/i;
    }
    printf("%d\n",permutations);
    return 0;
}

//Explanation:
//Initially lets say the steps are 11111...1
//No. of steps=n
//Every time we take two steps, total number of steps decreases by 1
//Thus, the next time, we have 111...121...111, where total no. of steps=n-1
//So, n-1 permutations are possible
//Next, no. of steps=2 and (n-2)*(n-3)/2 permutations are possible (divided by 2 due to repetition of elements)
//Similarly, we get (n-3)*(n-4)*(n-5)/3 , (n-4)*(n-5)*(n-6)*(n-7)/4 , ...
//Finally, steps will be 2222...2 or 2222...21, which will have n/2 or n/2+1 elements, thus we will have made n replacements in total