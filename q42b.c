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

void display(struct node **start)
{
    if(start!=NULL)
    {
        struct node *temp=*start;
        while(temp->next!=NULL)
        {
            printf("%d->",temp->val);
            temp=temp->next;
        }
        printf("%d\n",temp->val);
    }
}

void rev_insert_node(struct node **start,struct node *New)
{
    New->next=*start;
    *start=New;
}

void reverse(struct node **start)
{
    struct node *temp=*start;
    struct node *rev=NULL,*temp2;
    while(temp!=NULL)
    {
        temp2=temp;
        temp=temp->next;
        rev_insert_node(&rev,temp2);
    }
    *start=rev;
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
    reverse(&start);
    display(&start);
    return 0;
}