#include <iostream>
using namespcae std;

struct node {
    int data;
    struct node* next;
}*first=NULL;

int create(struct node*p,int n){
    struct node*temp,*last;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(i=0;i<n;i++){
        temp=new node;
        temp->data=a[i];
        temp->next=NULL;
        last=temp;
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
void count (strcut *node p){
     int c=0;
     while(p!=null){
         c++;
         p=p->next;
     }
     return c;
}

void insert(struct node *p,int index,int x){
    struct node *t;
    int i;
 if(index <0 || index >count(P))
  return ;
  t=new node;
  t->data =x;

  if(index==0){
      t->next=first;
      first=t;
  }

else
{
    for(i=0;i<index-1;i++)
    p=p->next;
    t->next=p->next;
    p->next=t;
}


}
int main(){
    int A[]={3,9,17,3};
    create(A,4);
    insert(first,2,5)
    display(first);
}