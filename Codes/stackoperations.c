#include <stdio.h>
#include <stdlib.h>
#define MAX 100
int stack[MAX];
int push(int stack[],int top,int ITEM){
    //check for overflow
    if(top==MAX-1){
        printf("Stack Overflow\n");
        return top;
    }
    else{
        top++;
        stack[top]=ITEM;
        return top;
    }
}
int pop(int stack[],int top){
    //check for unfderflow
    if(top==-1){
        printf("Stack Underflow\n");
        return top;
    }
    else{
        int ITEM=stack[top];
        printf("Element poped out %d\n",ITEM);
        top--;
        return top;
    }
        
    }
void Display(int stack[],int top){
    if(top==-1){
        printf("Stack is empty \n");
    }
    else{
        printf("Stack elements are: \n");
        for(int i=0;i<=top;i++){
            printf("%d\n",stack[i]);
        }
    }
}
int main(){
    int top=-1, choice,ITEM;
    do{
    printf("//MENU//\n");
    printf("1.INSERT\n");
    printf("2.DELETE\n");
    printf("3.DISPLAY\n");
    printf("4.EXIT\n");
    printf("ENTER YOUR CHOICE\n");
    scanf("%d",&choice);
    switch(choice){
        case 1:
            printf("Enter element to be pushed:");
            scanf("%d",&ITEM);
            top=push(stack,top,ITEM);
            break;
        case 2:
            top=pop(stack,top);
            break;
        case 3:
            Display(stack,top);
            break;
        case 4:
            printf("Tata!!!\n");
            break;
        default:
            printf("Invalid choice\n");
}
}while(choice!=4);
}