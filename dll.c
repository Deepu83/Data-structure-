#include<stdio.h>
#include<stdlib.h>

typedef struct node
{
    int info;
    struct node *next;
    struct node *prev;
}Dnode;

Dnode *Head=NULL;
Dnode *Tail=NULL;

void Insert_At_Start(int item)
{
    Dnode *temp;
	temp=(Dnode *)malloc( sizeof (Dnode));
    printf("\n enter the value for Insert : ");
                    scanf("%d",&item);
    temp->info=item;

    if(Head==NULL)  //for empty list
    {
        temp->prev=NULL;
        temp->next=NULL;
        Head=Tail=temp;
    }
    else
    {
		temp->prev=NULL;
		temp->next=Head;
        Head->prev=temp;
        Head=temp;
    }
}

void Forward_Traversal()
{
    Dnode *current;
    if(Head==NULL)
        printf("\n List is Empty ");
    else
    {
        current=Head;
        while(current!=NULL)
        {
            printf("   %d",current->info);
            current=current->next;
        }

    }
}

void Backward_Traversal()
{
    Dnode *current;
    if(Head==NULL)
        printf("\n List is Empty ");
    else
    {
        current=Tail;
        while(current!=NULL)
        {
            printf("   %d",current->info);
            current=current->prev;
        }

    }

}

void main()
{
    int ch,se,after,item;
    while(1)
    {
       printf("1.insert ");
       printf("2.Forward");
       printf("3.Frontward");
        printf("  Enter your Choice  ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1: 
                    Insert_At_Start(item);
                    break;




            case 2: Forward_Traversal();
                    break;

            case 3: Backward_Traversal();
                    break;

            case 4:exit(1);

            default:printf("\n\n  Wrong Choice  ");
                    break;
        }
    }
}
