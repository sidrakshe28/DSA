#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *p;
}*head=null;

void create(struct node *p,int n){
    struct node*temp,*last;
    head=new node;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for(i=0;i<n;i++){
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;
        last=temp;

    }
}

void display (struct node*h){
     do{
         cout<<"print data"<<-h>data;
         h=h->next;
     }
     while(h!=head);

     cout<<"\n";
 }


void delete()
int main(){
    int A[]={2,3,8,9};
    create(A,4);
    display(head);
    insert()
}