#include <stdio.h>
#include <stdlib.h>

 typedef struct node{
        int data;
        struct node  *next;

    }Node;
Node* createnode(int value){
    Node *pos=malloc(sizeof(Node));
    pos->data=value;
    pos->next=NULL;
    return pos;
}

Node* insertnode(int ){
    
}

int main(){
   Node *a=createnode(10);
   Node *b=createnode(20);
   Node *c=createnode(30);
   Node *d=createnode(40);
a->next=b;
b->next=c;
c->next=d;
d->next=NULL;


   /* Node *head=NULL;
    Node *first=malloc(sizeof(Node));
    first->data=20;
   
    head=first;
    Node *second=malloc(sizeof(Node));
     first->next=second;
    second->data=30;
    

    Node *third=malloc(sizeof(Node));
    second->next=third;
    third->data=40;
   
    third->next=NULL;
*/
        Node *temp=a;

    
    while(temp!=NULL){
        printf(" %d", temp->data);
        temp=temp->next;

    }
return 0;

}