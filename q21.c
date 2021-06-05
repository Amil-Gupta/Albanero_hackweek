#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
}*input,*output;

void insert(int v,struct node **start) //common insert function
{
    struct node *New = (struct node*) malloc(sizeof(struct node));
    struct node *temp;
    New->val=v;
    New->next=NULL;
    if(*start==NULL)
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

void reorder()
{
    struct node *temp=input;
    while(temp!=NULL)
    {
        insert(temp->val,&output);
        temp=temp->next;
        if(temp != NULL)
        {
            temp=temp->next;
        }
    }
    if(input!=NULL)
    {
        temp=input->next;
        while(temp!=NULL)
        {
            insert(temp->val,&output);
            temp=temp->next;
            if(temp != NULL)
            {
                temp=temp->next;
            }
        }
    }
}

void display(struct node **start)
{
    struct node *temp=*start;
    if(temp!=NULL)
    {
        while(temp->next!=NULL)
        {
            printf("%d->",temp->val);
            temp=temp->next;
        }
        printf("%d\n",temp->val);
    }
}

int main()
{
    int val,choice=1;
    while(choice)
    {
        printf("Enter 1 to insert a value or enter 0 to exit\n");
        scanf("%d",&choice);
        if(choice)
        {
            printf("Enter value to be inserted\n");
            scanf("%d",&val);
            insert(val,&input);
        }
    }
    reorder();
    display(&output);
    return 0;
}