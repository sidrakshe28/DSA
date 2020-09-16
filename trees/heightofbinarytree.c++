#include<iostream>
using namespace std;

struct Node{
    int data;
     struct node*left;
      struct node*right;

     Node(int x){

         data=x;
         left=right=NULL;
     }

};

int heigh t(Node *node)
{
    if(Node=null){
        return 0;
    }

    else{
        return max(height(node->left),heigth(node->right));

    }
}