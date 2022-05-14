#include <bits/stdc++.h>

using namespace std;

struct node{
    int val;
    struct node* next;
};
typedef struct node node;
class Queue{
    node* h;
    node* t;
    int s;
public:
    void createNewQueue(){
        h=t=NULL;
        s=-1;
    }
    bool isEmpty(){
        if(h==NULL){
            return 1;
        }
        else{
            return 0;
        }
    }
    void enqueue(int n){
        node* newnode = new node;
        newnode->val = n;
        if(isEmpty()==1){
            h=t=newnode;
        }
        else{
            t->next = newnode;
            t = newnode;
        }
        s++;
    }
    int dequeue(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
            return INT_MAX;
        }
        node* n;
        n = h;
        h = n->next;
        if(h == NULL){
            t = NULL;
        }
        s--;
        return n->val;
    }
    int peek(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
        }
        return h->val;
    }
};

int main(){
    class Queue q;
    q.createNewQueue();
    q.enqueue(1);
    q.enqueue(4);
    cout<<q.dequeue()<<endl;
    cout<<q.peek()<<endl;
}
