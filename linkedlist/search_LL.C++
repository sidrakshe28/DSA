#include<stdio.h>
using namespace std;

struct node{
    int data;
     struct node *next;
}*first =NULL;

void create(int A[],int n){
    struct node *last ,*temp;
    first=new node;
    first->data=A[0];
    first->next=NULL;
    last=first;

    for(i=o;i<n;i++){
        temp=new node;
        temp->data=A[i];
        temp->next=NULL;
        last=temp;
    }
}
int main(){
    int A[]={3,5,9,11,34,99};
    create(A,6)
    
}