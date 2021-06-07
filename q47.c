#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
};

void insert(int v,struct node **start)
{
    struct node *temp;
    struct node *New=(struct node*) malloc(sizeof(struct node));
    New->val=v;
    New->next=NULL;
    if(*start == NULL)
    {
        *start=New;
    }
    else
    {
        temp=*start;
        while(temp->next != NULL)
        {
            temp=temp->next;
        }
        temp->next=New;
    }
}

int palindrome(struct node *start)
{
    struct node *temp=start;
    int n=0,i;
    if(start!=NULL)
    {
        while(temp!=NULL)
        {
            n++;
            temp=temp->next;
        }
        int a[n];
        temp=start;
        for(i=0;i<n;i++)
        {
            a[i]=temp->val;
            temp=temp->next;
        }
        for(i=0;i<n/2;i++)
        {
            if(a[i] != a[n-i-1])
            {
                return 0;
            }
        }
    }
    return 1;
}

int main()
{
    struct node *start=NULL;
    int v,choice=1;
    while(choice)
    {
        printf("Enter 1 to insert a new node or enter 0 to finish\n");
        scanf("%d",&choice);
        if(choice)
        {
            printf("Enter value\n");
            scanf("%d",&v);
            insert(v,&start);
        }
    }
    if(palindrome(start))
    {
        printf("True\n");
    }
    else
    {
        printf("False\n");
    }
    return 0;
}