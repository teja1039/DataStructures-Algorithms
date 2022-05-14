#include <bits/stdc++.h>
#define MAX 100
using namespace std;

class Stack{
    int top;
    int arr[MAX];
    public:
    void createNewStack(){
        top = -1;
    }
    bool isEmpty(){
        if(top == -1){
            return 1;
        }
        else{
            return 0;
        }
    }
    bool isFull(){
        if(top == MAX-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void pop(){
        if(isEmpty() == 1){
            cout<<"The stack is empty"<<endl;
        }
        else{
            top--;
        }
    }
    void push(int data){
        if(isFull() == 1){
            cout<<"The stack is full"<<endl;
        }
        else{
            top++;
            arr[top] = data;
        }
    }
    int peek(){
        if(top == -1){
            cout<<"The stack is empty"<<endl;
            return INT_MAX;
        }
        else{
            return arr[top];
        }
    }
};

int main(){
    class Stack s;
    s.createNewStack();
    s.push(2);
    s.push(36);
    cout<<s.peek()<<endl;
    s.pop();
    cout<<s.peek()<<endl;
}
