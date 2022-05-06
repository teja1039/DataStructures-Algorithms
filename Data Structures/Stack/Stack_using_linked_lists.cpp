#include <iostream>
using namespace std;

struct Node{
    int val;
    struct Node* prev;
}node;
class stack{
  public:
  Node* Top;
  int s=-1;
  void push(int n){
    Node* l;
    l = new Node();
    l->val=n;
    l->prev=Top;
    Top=l;
    s++;
  }
  void pop(){
    if(s!=-1)
    {
      Node* temp=Top;
      Top=Top->prev;
      temp->prev=NULL;
      delete(temp);
    }
    else cout<<"Stack is empty"<<endl;
    s--;
  }
  int peek(){
    if(s!=-1){
      return  Top->val;
    }
    else{
      cout<<"stack is EMPTY"<<endl;
    }
    return 0;
  }
  void print(){
    if(s!=-1){
      Node* l = Top;
      for(int i=0;i<=s;i++){
       cout<<l->val<<endl;
       l = l->prev;
      }
    }
    else cout<<"stack is EMPTY"<<endl;
  }
};
int main() {
  stack s; 
  s.push(5);
  s.push(3);
  s.pop();
  cout<<s.peek()<<endl;
  s.print();
} 
