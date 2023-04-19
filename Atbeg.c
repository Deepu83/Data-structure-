#include<stdio.h>
#include<stdlib.h>
typedef struct nod{
int info;
struct node *link;
}node;
node *start=NULL;
void Display()
{
node *temp;
if (start==NULL)
printf("List is Empty");
else
{
	temp= start;
	while(temp!=NULL)
	{
		printf("Data=%d \n",temp->info);
		temp = temp->link;
	}

}
}    

void bginsert(){
    int data;
    node* temp;
    temp=(node*)malloc(sizeof(node));
    printf("ENter data");
    scanf("%d",&data);
    temp->info=data;
    temp->link=start;
    start=temp;
}

void main()

{
    int ch;
    while(1)
    {
    printf("1 Insert data");
    printf("2 Display data");
    printf("Enter ");
    scanf("%d",&ch);
    switch(ch){
        case 1: bginsert();
        break;
        case 2: Display();
        break;
        default: printf("It is invalid  please ehter a valid option");
    }
}
}
