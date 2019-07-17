#include<bits/stdc++.h>
using namespace std;
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
};
int main(){
    int T;
    cin>>T;
    while(T--)
    {
        MyQueue *sq = new MyQueue();
        int Q;
        cin>>Q;
        while(Q--){
        int QueryType=0;
        cin>>QueryType;
        if(QueryType==1)
        {
            int a;
            cin>>a;
            sq->push(a);
        }else if(QueryType==2){
            cout<<sq->pop()<<" ";
        }
        }
        cout<<endl;
    }
}


/*This is a function problem.You only need to complete the function given below*/
/* Structure of a node in Queue
struct QueueNode
{
    int data;
    QueueNode *next;
    QueueNode(int a)
    {
        data = a;
        next = NULL;
    }
};
And structure of MyQueue
struct MyQueue {
    QueueNode *front;
    QueueNode *rear;
    void push(int);
    int pop();
    MyQueue() {front = rear = NULL;}
}; */
/* The method push to push element into the queue*/
void MyQueue:: push(int x){
        // Your Code
        QueueNode *node = new QueueNode(x);
        if(!front){
            front = node;
            rear = node;
            return;
        }
        rear->next = node;
        rear = node;
        return;
}
/*The method pop which return the element
  poped out of the queue*/
int MyQueue :: pop(){
        // Your Code
        if(!front){
            return -1;
        }
        
        QueueNode *temp = front;
        front = front->next;
        if(!front) rear = NULL;
        int x = temp->data;
        delete temp;
        return x;
}
