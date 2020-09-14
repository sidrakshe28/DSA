//function to create a binary tree
 struct Node *root=NULL;

void create(){
    struct Node *p,*t;
    int x;
    struct queue q;
    create(&q,100);

    cout<<"enter the root value ";
    cin>>x;
    root =new node;
    root->data=x;
    root->lchild=root->rchild=0;
    enqueue(&q, root);

    while(!isempty(q)){
        p=dequeue(&q);
        cout<<<enter the left child;
        cin>>x;
        if(x!=1){
        t=new node;
        t->data=x;
        t->lchild=t->rchild=0;
        p->lchild;
        enqueue(&q,t);
        }

       
        cout<<<enter the right child;
        cin>>x;
        if(x!=1){
        t=new node;
        t->data=x;
        t->lchild=t->rchild=0;
        p->rchild;
        enqueue(&q,t);
        }



    }


}

void preorder(struct node *p)
{
    if(p){
        cout<<p->data;
        preorder(p->lchild);
        preorder(p->rchild);

    }
}
int main(){
    create();

    preorder(root);
     return 0;

}