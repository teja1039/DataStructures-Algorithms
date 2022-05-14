#include <bits/stdc++.h>
#define MAX 100

using namespace std;

class Queue{
    int arr[MAX];
    int f; //front
    int b; //back
    int s; //size
public:
    void createNewQueue(){
        f = b = s = -1;
    }
    bool isFull(){
        if(s == MAX-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isEmpty(){
        if(s==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void enqueue(int n){
        if(isFull() == 1){
            cout<<"The queue is full"<<endl;
        }
        else{
            if(isEmpty()==1){
                f=0;
                b=-1;
            }
            b = (b+1)%MAX;
            arr[b] = n;
            s++;
        }
    }
    void dequeue(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
        }
        else{
            s--;
            f = (f+1)%MAX;
        }
    }
    int peek(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
            return INT_MAX;
        }
        else{
            return arr[f];
        }
    }
};
int main()
{
    class Queue q;
    q.createNewQueue();
    q.enqueue(1);
    q.enqueue(4);
    cout<<q.peek()<<endl;
    q.dequeue();
    cout<<q.peek()<<endl;
    return 0;
}
