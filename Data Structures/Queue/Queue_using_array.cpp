#include <bits/stdc++.h>
#define MAX 100

using namespace std;

class Queue{
    int arr[MAX];
    int s; //size
public:
    void createNewQueue(){
        s = -1;
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
            s++;
            arr[s] = n;
        }
    }
    int dequeue(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
            return INT_MAX;
        }
        else{
            s--;
            return arr[s+1];
        }
    }
    int peek(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
            return INT_MAX;
        }
        else{
            return arr[s];
        }
    }
};
int main()
{
    class Queue q;
    q.createNewQueue();
    q.enqueue(1);
    q.enqueue(4);
    cout<<q.dequeue()<<endl;
    cout<<q.peek()<<endl;
    return 0;
}
