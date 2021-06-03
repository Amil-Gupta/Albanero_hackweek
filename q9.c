#include<stdio.h>

int main()
{
    int n,i,pmax=0,cost;
    printf("Enter no. of days\n");
    scanf("%d",&n);
    int prices[n];
    printf("Enter prices\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&prices[i]);
    }
    for(i=0;i<n;i++)//need to consider final day separately due to logic
    {
        if( (prices[i]<prices[i+1]) && (prices[i]<prices[i-1] || i==0) && (i!=n-1) ) //buying on last day means we will never be able to sell
        {
            cost=prices[i];
        }
        else if( (prices[i]>prices[i+1] || i==n-1) && (prices[i]>prices[i-1]) && (i!=0) ) //cannot sell stocks if we don't own them yet(1st day)
    //this mistake won't be made until the next buy because we only sell at maxima
        {
            pmax+=prices[i]-cost;
        }
    }
    printf("%d",pmax);
    return 0;
}

//Multiple transactions cannot occur simultaneously
//So, maximum profit will be acheieved if we buy just before prices start increasing and sell just before the start decreasing
//This enables us to buy if we want to whenever we receive lower prices, and sell if we want to whenever we receive higher prices
//Basically, buy at local minima and sell at local maxima