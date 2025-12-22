#include <stdio.h>
#include  <stdlib.h>

typedef struct node{
    int data;
    struct node *next;

}Node;
typedef struct linkedlist{
    int count;
    Node *head;

}List;
List *createlist(){
    List *L=malloc(sizeof(List));
    L->count=0;
    L->head=NULL;
    return L;

}
Node *createnode(int value){
    Node *n=malloc(sizeof(Node));
    n-> data=value;
    n->next=NULL;
    return n;

}
void insertnode(int value, List *L){
    Node *n=createnode(value);
    n->next=L->head;
    L->head=n;
    L->count++;

}
void printlist(List *L){
    Node *temp=L->head;
    while(temp!=NULL){
        printf("%d ",temp->data);
        temp=temp->next;

    }
    printf("\n");

}

int main(){
    List *L=createlist();
    insertnode(10,L);
    insertnode(20,L);
    insertnode(30,L);

   

    printlist(L);
    return 0;
}