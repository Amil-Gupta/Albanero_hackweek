#include<stdio.h>
#include<stdlib.h>

struct node
{
    int val;
    struct node *next;
}*list=NULL;

void insert(int v,struct node **start) //common insert function
{
    struct node *New=(struct node*)malloc(sizeof(struct node));
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

void revinsert(int v,struct node **start) //inserts values in reverse
{
    struct node *New=(struct node*) malloc(sizeof(struct node));
    New->val=v;
    New->next=*start;
    *start=New;
}

void empty_list() //to free memory before losing pointers
{
    struct node *temp=list->next;
    while(list!=NULL)
    {
        free(list);
        list=temp;
        if(temp!=NULL)
        {
            temp=temp->next;
        }
    }
}

void alt_merge_to_list(struct node **list1,struct node **list2) //merges list1 and list2 alternatively and stores them in list
{
    struct node *t1=*list1,*t2=*list2;
    empty_list();
    while(t1!=NULL && t2!=NULL)
    {
        insert(t1->val,&list);
        insert(t2->val,&list);
        t1=t1->next;
        t2=t2->next;
    }
    if(t2!=NULL) //as list2 can be 1 node longer than list1
    {
        insert(t2->val,&list);
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

void reorder()
{
    struct node *list1=NULL,*list2=NULL;
    struct node *temp=list;
    int count=0,half;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    half=count/2;
    count=0;
    temp=list;
    if(temp!=NULL)
    {
        while(count<half)
        {
            insert(temp->val,&list1);
            count++;   
            temp=temp->next;
        }
        display(&list1);
        while(temp!=NULL)
        {
            revinsert(temp->val,&list2);
            temp=temp->next;
        }
        alt_merge_to_list(&list1,&list2);
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
            insert(val,&list);
        }
    }
    reorder();
    display(&list);
    return 0;
}