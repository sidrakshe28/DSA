#include <iostream>

struct node{
    int data;
    struct node  *next;
}*head;

 void create(int a[],int n){
     int i ;
     struct node *temp,*last;
     head=new node;
     head->data=A[0];
     head=head->next;
     last=head;

     for(i=1;1<n;i++){
         temp=new node;
         temp->data=A[i];
         temp=temp->next;
         temp=last;
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
int main(){
   int A[]={2,3,4,5,6}
   Create(A,5);
  display (head);

    return 0;

}