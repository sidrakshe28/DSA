
#include <iostream>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=NULL;

void create(int A[],int n){
    struct node *t,*last;
    int i;
    first=new node;
    first-> data=A[0];
    first->prev=first->next=NULL;
    last=first;

    for(i=1;i<n;i++){
        t=new node;
        t->data=A[i];
        t->next=last->next;
        last->next=t;
        last=t;
    }
}

void display(struct node*p){
    while(P!=null){
        cout<<"print data"<<p->data;
        p=p->next;

    }
    cout("\n");
}

void length(struct node *p){
    int len=0;
    while(P){
        len++;
        p=p->next;
    }
    return len;
} 

void insert(struct node *p,int index,int x){
    struct node *t;
    int i;

    if(index <0 || index >length(P))
    return;
    if(index==0){
        t=new node;
        t->data=x;
        t->prev=NULL;
        t->next=first;
        first->prev=t;
        first=t;
    }
    else{
        for(i=0;i<index-1;i++){
            p=p->next;
            t=new node;
            t->data=x;
            t->prev=p;
            t->next=p->next;
            if(p->next)p->next->prev=t;
            p->next=t;
        }
    }
}

int main(){
 int A[]={10,20,30,40};
 create(A,5);
 cout<<"the length is:"<<length(first);

 insert(first,2,25);
 display(first);

 return 0;
}