#include <iostream>
using namespace std;

struct node{
    struct node *prev;
    int data;
    struct node *next;
}*first=null;

void create(int A[],int n){
    struct node *t,*last;
    int i;
    first=new node;
    first->data=A[0];
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
    while(P){
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

void reverse(struct node *p){

 struct node *temp;

 while(p!=null){
     temp=p->next;
     p->next=p->prev;
     p->prev=temp;
     p=p->prev;
     if(p!=NULL &&  p->next==NULL)
     first=p;
 }
}
int main(){
 int A[]={10,20,30,40};
 create(A,5);
 cout<<"the length is:",length(first)<<endl;
 reverse(first);
 display(first);

 return 0;
}