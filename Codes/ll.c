#include<stdio.h>
#include<stdlib.h>
struct Node{
    int data;
    struct Node* next;
}Node;
Node* head= Null;
void create(){
    int size,value;
    printf("Enter size of linked list:");
    scanf("%d",&size);
    Node* newNode,*temp;
    for(int i=0;i<size;i++){
        newNode=(Node*)malloc(sizeof(Node));
        printf("Enter value of node %d:",i+1);
        scanf("%d",&value);
        newNode->data=value;
        newNode->next=Null;
        if(head==Null){
            head=newNode;
            temp=head
            else{
                temp->next=newNode;
                temp=newNode;
            }
}