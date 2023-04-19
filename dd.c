// implement  singly linked list
#include<stdio.h>
#include<stdlib.h>
void display();
struct  node{
    int data;
    struct node* link;
};
int main()
{
    struct node *first;
      struct node *second;
        struct node *third;
          struct node *four;
          first=(struct node*)malloc(sizeof(struct node));
           second=(struct node*)malloc(sizeof(struct node));
            third=(struct node*)malloc(sizeof(struct node));
             four=(struct node*)malloc(sizeof(struct node));
             first->data=21;
             second->data=43;
             third->data=342;
             first->link=second;
             second->link=third;
             third->link=four;
             four->link=NULL;
             display(first);
             return 0;
}
void display(struct node *ptr)
{
    while(ptr!=NULL);
    {
        printf("%d",ptr->data);
        ptr=ptr->link;
        
    }
    
}
