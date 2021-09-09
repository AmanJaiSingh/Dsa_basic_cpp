#include <iostream>
#include <stdio.h>
#include "queuecpp.h"

using namespace std;


// class for queue end here--------------------------------------------------------------------------------------


// Class for Tree------------------------------------------------------------------------------------------------

class Tree{
    public:
        Node* root;
        Tree(){root=NULL;}
        void CreateTree();
        void Preorder(Node *p);
        void Postorder(Node *p);
        void Inorder(Node *p);
        void Levelorder(Node*p);
        int Height(Node *root);
};

void Tree::CreateTree(){
    Node *p,*t;
    int x;
    Queue q(100);

    printf("Enter root value- ");
    scanf("%d",&x);
    root =new Node;
    root->data=x;
    root->lchild=root->rchild=NULL;
    q.enqueue(root);

    while(!q.isEmpty()){
        p=q.dequeue();
        printf("Enter left child of %d- ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t=new Node;
            t->data =x;
            t->lchild=t->rchild=NULL;
            p->lchild=t;
            q.enqueue(t);
        }
        printf("Enter right child of %d- ",p->data);
        scanf("%d",&x);
        if(x!=-1){
            t=new Node;
            t->data =x;
            t->lchild=t->rchild=NULL;
            p->rchild=t;
            q.enqueue(t);
        }
    }
    cout<<"\nTree Created\n";
}

void Tree::Preorder(Node *p){
    if(p){
        printf("%d ",p->data);
        Preorder(p->lchild);
        Preorder(p->rchild);
    }
}

void Tree::Postorder(Node *p){
    if(p){
        Postorder(p->lchild);
        Postorder(p->rchild);
        printf("%d ",p->data);
    }
}

void Tree::Inorder(Node* p){
    if(p){
        Inorder(p->lchild);
        printf("%d ",p->data);
        Inorder(p->rchild);
    }
}

void Tree::Levelorder(Node* p){
    Queue q(100);
    printf("%d ",p->data);
    q.enqueue(p);

    while(!q.isEmpty()){
        p=q.dequeue();
        if(p->lchild){
            printf("%d ",p->lchild->data);
            q.enqueue(root->lchild);
        }
        if(p->rchild){
            printf("%d ",p->rchild->data);
            q.enqueue(root->rchild);
        }
    }
}
int Tree::Height(Node *root){
    int x=0,y=0;
    if(root==0){
        return 0;
    }
    x=Height(root->lchild);
    y=Height(root->rchild);
    if(x>y){
        return x+1;
    }else{
        return y+1;
    }
}


int main (){

    Tree t;
    t.CreateTree();
    cout<<"Preorder of Tree\n";
    t.Preorder(t.root);
    cout<<"\nInorder of Tree\n";
    t.Inorder(t.root);




    return 0;
}