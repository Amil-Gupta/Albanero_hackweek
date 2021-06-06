#include<stdio.h>

int main()
{
    int num1,num2,dd=0;
    printf("Enter 2 integers\n");
    scanf("%d%d",&num1,&num2);
    while(num1!=0)
    {
        dd += (num2%10) - (num1%10);
        num1/=10;
        num2/=10;
    }
    printf("%d\n",dd);
    return 0;
}