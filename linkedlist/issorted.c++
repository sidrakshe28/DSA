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
int isSorted(struct node *p){
    int x=-65536;

    while(p!=NULL){
        if(p->data <x)
            return 0;

        x=p->data;
        p=p->next;
    }
    return 1;
}

void disply( struct node *p ){
    node*p=first;
    while(p!=null){
        cout<<"linked list"<<p->data;
        p=p->next;
    }
    return 0;
}
int main(){
    int A[]=(3,4,10,28);
    create(A,4);
   issorted(first);

   display(first);
    return 0;
}