#include<iostream>
#include<stdio.h>
using namespace std;

srtruct bintree_node{
    bintree_node *left;
    bintree_node *right;
    int data;
};


class bst{
    bintree_node  *root;
    public:
    bst(){
        root=NULL;
    }

    int isempty(){
        return(root==NULL);
    }

    void insert(int item);
    void displaybintree();
    void printbintree(bintree_node *);


};

void bst::insert(int item){
    bintree_node *p=new bintree_node;
    bintree_node *parent;
    p->data=item;
    p->left=NULL;
    p->right=NULL;
    parent=NULL;
    if(isempty())
    root=p;

    else{
        bintree_node *ptr;
        ptr=root;
        while(ptr!=NULL){
            parent=ptr;
            if(item > ptr->data)
            ptr=ptr->right;
            else
            
                ptr=ptr->left;
            }

            if(item <parent->data)
            parent->left=p;
            else
            parent->right=p;

    
            
            
        }
    }


    void bst::displaybintree(){
        printBinTree(root);
    }


    void bst::printbintree(bintree_node *ptr){
        if(ptr!=null)
    {
         printBinTree(ptr->left);
        cout<<"  "<<ptr->data<<"     ";
        printBinTree(ptr->right);
    } 
   }


   int main()
{
    bst b;
    b.insert(20);
    b.insert(10);
    b.insert(5);
    b.insert(15);
    b.insert(40);
    b.insert(45);
    b.insert(30); 
     

    cout<<binary tree created"<<endl;
    b.displaybintree();

}
}

