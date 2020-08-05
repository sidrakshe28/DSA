#include <iostream>
using namespace std;

struct node{
    int data;
    struct node* next;
}*head;

void create( struct node*p, int n){
    int i;
    struct node*temp,*last;
    head=new node;
    head->data=A[0];
    head->next=NULL;
    last=head;

    for(i=0;i<n;i++){
        temp=new node;
        temp->data=a[i];
        temp->next=NULL;
        last=temp;

}
}
void display (struct node*h){
     do{
         cout<<"print data"<<h->data;
         h=h->next;
     }
     while(h!=head);

     cout<<"\n";
 }

int lenth(struct node*p){
    int len=0;
    do{
        len++;
        p=p->next;
    }
    while(p!=head);
    return len;
}

void insert(Struct node *p,int index,int x){
    struct node *t;
    int i;
    if(index<0 || index >length(P))
    return;

    if(index==0){
        t=new node;
        t->data=x;
        if(head==null){
            head=t;
            head->next=head;
        }
        esle{
            while(p->next!=head)
            p=p->next;
            t->next=head;
            head=t;
        }
    }
}

else{
    for(i=o;i<index-1;i++){
        t=new node;
        t->data=p->next;
        p->next=t;
    }
}
int main(){
    int A[]={1,4,5,7};
    create(A,4);
    display(head);
}
