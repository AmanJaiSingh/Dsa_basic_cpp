#include <bits/stdc++.h>


using namespace std;
class Node{
    public:
        int data;
        Node *next;
}*front=NULL,*rear=NULL;

void enqueue(int x){
    Node *t;
    t =new Node;
    if(t==NULL){
        printf("Queue is Full\n");
    }else{
        t->data=x;
        t->next=NULL;
        if(front==NULL){
            front = rear = t;
        }else{
            rear->next =t;
            rear =t;
        }
    }
}

int dequeue(){

    int x =-1;
    Node *t;
    if(t==NULL){
        printf("Queue is Empty\n");
    }else{
        x=front->data;
        t=front;
        front =front->next;
        free(t);
    }
    return x;

}

void Display(){
    Node *p;
    p=front;
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
    printf("\n");
}


int main(){

    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    

    Display();

    printf("%d",dequeue());
    cout<<"\n";

    Display();

    return 0;
}