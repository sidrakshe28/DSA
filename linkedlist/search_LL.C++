#include<iostream>
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


struct node * lsearch( struct node *p,int key){
    while(p!=null){
        if(key==p->data ){
        return p;
        }
        p=p->next;
    }
    return null;

 
}
int main(){
    struct node *t;
    int A[]={3,5,9,11,34,99};
    create(A,6)
    t=lsearch(first,11){
        if(t!=NULL)
        cout<<"key is found"<<t->data;
        else
        cout<<"key isnot found";
        return 0;

    }

    
}