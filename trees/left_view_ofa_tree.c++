#include<iostream>
using namespace std;

class Node{
    int data;
    struct Node*left;
    struct Node*right;


};

node* newnode(int item){
    node*temp=new node;
    temp->data=item;
    temp->left=temp->right=NULL;
    return temp;

}

void leftviewutil(node *root,int level ,int* max_level){
    if(root==NULL)
    return;
    
    if(*max_level <level){
        cout<<root->data<<"\t";
        *max_level=level;

    }
}
