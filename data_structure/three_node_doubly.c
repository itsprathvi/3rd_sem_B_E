#include<stdio.h>
#include<stdlib.h>
struct node
{
    struct node *pre;
    int data;
    struct node *next;
};

int main()
{
    struct node *head;
    struct node *middle;
    struct node *last;

    head=malloc(sizeof(struct node));
    middle=malloc(sizeof(struct node));
    last=malloc(sizeof(struct node));

    head->data=10;
    middle->data=20;
    last->data=30;

    head->pre=NULL;
    head->next=middle;
    middle->pre=head;
    middle->next=last;
    last->pre=middle;
    last->next=NULL;

    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
    return 0;
}