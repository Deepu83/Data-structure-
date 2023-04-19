#include<stdio.h>
int stack[5],top=-1;
void push();
void pop();
void show(); 

int main(){
   
int ch;
while(1){

    printf("1.enter element \n");
    printf("2pop\n");
    printf("3 show\n");
    printf("Enter your choice");
    scanf("%d",&ch);
    switch(ch){
        case 1: push();
        break;
        case 2: pop();
        break;
        case 3: show();
        break;
       
    }

}
}
void push(){
    int item;
    if(top==5-1)
    printf("overflow\n");
    
else{
    printf("Enter element\n ");
    scanf("%d",&item);
    top=top+1;
    stack[top]=item;


}
}
void pop(){
    if(top==-1)
    printf("underflow");
    else{
        printf("%d",stack[top]);
        top=top-1;
    }
}
void show(){
    int i;
    if(top>=0){
        printf("stack elements\n");
        for(i=top; i>=0; i--){
            printf("%d",stack[i]);
        }

    }
    else{
        printf("stack is empty");
    }
    
}