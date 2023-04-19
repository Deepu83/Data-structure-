#include<stdio.h>
#include<stdlib.h>
typedef struct node{
    int info;
    struct node *next
    }node;
    node *head=NULL;
    void Display();
    void bginsert();
    void delet();
    void insertAtend();
    void insertAtpos();
    void deletAtend();
    void main(){
        int ch;
        while(1)
        {
            printf("1 insert\n");
            printf("2 display\n");
            printf("3.exit\n");
            printf("4.delet");
            printf("5 insertAtend\n");
            printf("6.insertAtpos");
            printf("7.Delet at end ");
            printf("Enter your choices");
            scanf("%d",&ch);
            switch(ch){
                case 1: bginsert();
                break;
                case 2: Display();
                break;
                case 3: exit(0);
                break;
                case 4: delet();
                break;
                case 5:insertAtend();
                break;
                case 6: insertAtpos();
                break;
                case 7: deletAtend();
                break;
                default: printf("invalide");
            }
        }
    }

void Display()
{
node *temp;
if (head==NULL)
printf("List is Empty\n");
else
{
	temp= head;
	while(temp!=NULL)
	{
		printf("Data=%d \n",temp->info);
		temp = temp->next;
	}

}
}    
    void bginsert(){
        int data;
        node *temp;
        temp=(node*)malloc(sizeof(node));
        printf("enter data");
        scanf("%d",&data);
        temp->info=data;
        temp->next=head;
        head=temp;
    }
    void insertAtend(){
        int data;
        node *temp,*start;
        temp=malloc(sizeof(node));
        printf("Enter data\n");
        scanf("%d",&data);
        temp->info=data;
            temp->next=0;
            start=head;
            while(start->next!=NULL){
                start=start->next;
            }
            start->next=temp;
    }
    void insertAtpos(){
        int data,pos,i=1;
        node *temp,*newnode;
        newnode=malloc(sizeof(node));
         printf("Enter pos and data");
         scanf("%d",&pos);
         scanf("%d",&data);
         temp=head;
         newnode->info=data;
         newnode->next=0;
         while(i<pos-1){
            temp=temp->next;
            i++;
         }
         newnode->next=temp->next;
         temp->next=newnode;
     
            }
            // deletion start
  
      void delet()
    {
        node *ptr;
        if(head==NULL)
            printf("we can't delet\n ");
            else{
                ptr=head;
                head=head->next;
                free(ptr);  
           }
       }
  