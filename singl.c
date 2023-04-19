#include<stdio.h>
#include<stdlib.h>
typedef struct Nod
{
	int info;
	struct Nod *next;
}Node;

Node *start=NULL; 


void Display()
{
Node *temp;
if (start==NULL)
printf("List is Empty");
else
{
	temp= start;
	while(temp!=NULL)
	{
		printf("Data=%d \n",temp->info);
		temp = temp->next;
	}
}
}    
//Insert at beginning
void InsertAtbeg() 
{

	int data;
	Node *temp; 
	temp=(Node*)malloc(sizeof(Node));
	printf("\n enter number to insert");
	scanf("%d",&data);
	temp->info=data;
	temp->next=start;
	start=temp;
} 
//Insert at end
void insertAtend()
{  

int data;
Node*temp,*head;
temp=malloc(sizeof(Node));
printf("\n Enter Number to be inserted:");
scanf("%d",&data);
temp->next=0;
temp->info=data;
head=start;
while(head->next!=NULL)
{
	head=head->next;
	
}
head->next=temp;
	

} 
//Insert at position 
void insertAtposition() 
{
	Node*temp,*newnode;
	int pos,data,i=1;
	newnode=malloc(sizeof(Node));
	printf("enter position and data:");
	scanf("%d %d,&pos,&data");
	temp=start;
	newnode->info=data;
	newnode->next=0;
	while(i<pos-1) 
	{
		temp=temp->next;
		i++;
	} 
	newnode->next=temp->next;
	temp->next=newnode;
}

//Delete from beginning
void Deletebeg()
{
	Node*ptr;
	if(start==NULL) 
	printf("\n rajeev we can't delete because there is not elment for delete");
	else
	{
		ptr=start;
		start=ptr->next;
		free(ptr);
	}
} 
//delete from end
void DeleteEnd()
{
	Node*temp ; 
	Node*ptr;
	if(start==NULL)
	printf("Rajeev we can delete Node from end of SLL"); 
	else
	{
		ptr=start; 
		if(ptr->next==NULL)
		{
			start==NULL;
			free(ptr); 
			
			
		} 
		else 
		{
			while(ptr->next!=NULL)
			{
				temp=ptr;
				ptr=ptr->next;
			} 
			temp->next=NULL;
			free(ptr);
			}
	 }
}
void main()
{
	int choice; 
	while(1)
	{
		printf("\n\t1 to see list");
		printf("\n\t2 to insert at begging of list:"); 
		
		printf("\n\t3 to insert at  endlist:");
		printf("\n\t4 to insert at any position list:"); 
		printf("\n\t5 to delet from begging:"); 
		printf("\n\t6 to delet from end:");
		printf("\n\t7 to exitlist:\n"); 
	
		printf("\n\n Enter your choice:\n"); 
		scanf("%d", &choice);
		switch(choice)

{
	case 1:
	Display();
	break; 
	case 2:
	InsertAtbeg();
	break;
	case 3:
	insertAtend();
	break;  
	case 4:
	insertAtposition();
	break;
	case 5:
	Deletebeg();
	break; 
	case 6: 
	DeleteEnd();
	case 7:
	exit(1);
	defult:
		printf("Invalid COmmand");
		}		
		
	}
}
