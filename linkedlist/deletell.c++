#include <iostream>
using namespace std;
struct node{
  int data;
  struct node *next;
}*first=NULL;

void create(int A[],int n){
  struct node *temp,*last;
  first = new node;
  first->data=A[0];
  first->next=NULL;
  last=first;

  for(int i=1;i<n;i++){
    temp=new node;
    temp->data=A[i];
    temp->next=NULL;
    last->next=t;
    last=t;
  }
}
void display(strcut node*p){
    node* p=first;
    while(p!=NULL){
        cout<<"linked list is"<<p->data;
        p=p->next;

    }
    return 0;
}

int delete(struct node*p ,int index )
{
    struct node *q;
    int x= -1,i;

    if(index < 1 || index > count(P))
    return x=-1; // not delelted

    if(index==1){
        q=first;
        x=first->data;
        first=first->next;
        delete q;
        return x; //delted element in x
       }
       else{
         for(i=0;i< index-1;i++){
           q=p;
           p=p->next;
         }
         q->next=p->next;
         x=p->data;
         delete p;
         return x;
       }

}


int main(){
    int A[]={3,9.17,3};
    create(A,4);
    delete(first,3);
    
    display(first);
}