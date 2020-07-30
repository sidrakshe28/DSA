#include <iostream>
using naespace std;

struct {
    int data;
    struct node* p;
}*first=NULL;

void create(int A[],int n){
    int i;
    struct node*temp,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        temp=new node;
        temp->data=A[i];
        temp->next=NUll;
        last=temp;
    }
}
void display(struct node*p){
    node*p=first;
    while(p!=null){
    cout<<"linked list"<<p->data;
    p=p->next;
    }
    return 0;


}

void removeduplicate(struct node*p){
    struct node*q=first->next;
    while(q!=null){
        if(p->data!=q->data){
            q=p;
            q=q->next;
        }
        else{
            p->next=q->next;
            delete q;
            q=p->next;


        }
    }
}

int main(){
    int A[]={1,7,20,20,30,40,50}
    create(A,7);
   removeduplicate(first);
   dispay(first);

    return 0;
}