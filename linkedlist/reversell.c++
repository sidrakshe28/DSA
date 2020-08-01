#include <iostream>
using namespace std;

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

void reverse(struct node *p){
    int *A,i=0;
    struct node *q;
    A=new node;
    while(q!=NULL)
    {
        A[i]=q->data;
        q=q->next;
        i++
    }
    q=p;
    i--;
    while(q!=NULL){
        q->data=A[i];
        q=q->next;
        i--;
    }

}

int main(){
    int A[]={1,7,20,20,30,40,50}
    create(A,7);
  reverse(first);
   dispay(first);

    return 0;
}