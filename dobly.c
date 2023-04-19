#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next,*pre;
}node;
node *head=0;
node *tail=0;
void insert();
void back();
void front();
void main(){
    int ch;
    while(1){
        printf("1.insert");
        printf("\n2.back");
        printf("\n3.front");
        printf("Enter your choic\n");
        scanf("%d",&ch);
        switch(ch){
            case 1: insert();
            break;
            case 2: back();
            break;
            case 3:front();
            break;
            default:printf("INvaild");
        }
    }

}
void insert(){
    int data;
    node *temp;
    temp=malloc(sizeof(node));
    printf("Enter data");
    scanf("%d",&data);
    temp->info=data;
    if(head==NULL){
        temp->next=NULL;
        temp->pre=NULL;
        head=tail=temp;
    }
    else{
        temp->pre=NULL;
        temp->next=head;
        head->pre=temp;
        head=temp;
    }

}
void back()
{
    node *current;
    if(head==NULL)
        printf("\n List is Empty ");
    else
    {
        current=tail;
        while(current!=NULL)
        {
            printf("   %d",current->info);
            current=current->pre;
        }

    }

}
void front()
{
    node *current;
    if(head==NULL)
        printf("\n List is Empty ");
    else
    {
        current=head;
        while(current!=NULL)
        {
            printf("   %d",current->info);
            current=current->next;
        }

    }

}