#include<stdio.h>
#include <stdlib.h>
typedef struct node{
    int roll;
    struct node *next;

}Node;
typedef struct link{
    int count;
   Node *head;


}List;

List *createlist(){
    List *l=malloc(sizeof(List));   
    l->count=0;
    l->head=NULL;
    return l;

}
Node *createnode(int value){
    Node *n=malloc(sizeof(Node));
    n->roll=value;
    n->next=NULL;
    return n;

}
void insertfront(List *l,int roll){
    
    Node *n=createnode(roll);
    n->next=l->head;
    l->head=n;

    l->count++;

}

void insertend(List *l,int roll){
    Node *n=createnode(roll);
    if(l->head==NULL){
        l->head=n;
        l->count++;

    }
    Node *temp=l->head;
    while(temp->next!=NULL){
        temp=temp->next;
    }temp->next=n;
l->count++;
}
void printlist(List *l){
    Node *temp=l->head;

    while(temp!=NULL){
        printf("%d ", temp->roll);
        temp=temp->next;
    }
    printf("\n");


}
int main(){
   List *l=createlist();
    insertfront(l,101);
    insertfront(l,102);
    insertfront(l,103);
    insertfront(l,104);
    insertend(l,555655);
    printlist(l);
    return 0;
}