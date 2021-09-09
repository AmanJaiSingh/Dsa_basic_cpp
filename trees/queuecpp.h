#include <stdio.h>

class Node{
    public:
        Node* lchild;
        int data;
        Node* rchild;
};

// class for queue ---------------------------------------------------------------------------------------
class Queue
{
    private:
        int front;
        int rear;
        int size;
        Node **Q;
    public:
       Queue(){front=-1;rear=-1;size=10;Q = new Node*[size];}
       Queue(int size){front=-1;rear=-1;this->size=size;Q = new Node *[this->size];}
       void enqueue(Node *x);
       Node* dequeue();
       int isEmpty(){return front == rear;};
       void Display();
};

void Queue::enqueue(Node *x){
    if(rear==size-1){
        printf("Queue Full\n");
    }else{
        rear++;
        Q[rear]=x;
    }
}

Node* Queue::dequeue(){
    Node * x=NULL;
    if(front == rear){
        printf("Queue is empty\n");
    }else{
        x=Q[front+1];
        front++;
    }
    return x;
}

void Queue::Display(){
    for(int i =front+1;i<=rear;i++){
        printf("%d ",Q[i]);
    }
    printf("\n");
}
