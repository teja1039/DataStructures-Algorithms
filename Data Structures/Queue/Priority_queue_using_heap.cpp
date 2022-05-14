#include <bits/stdc++.h>
#define MAX 100
using namespace std;

void Swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int arr[] ,int i,int n){
    int l = 2*i + 1;
    int r = 2*i + 2;
    int Max = i;
    if(arr[l] > arr[Max] and l<n){
        Max = l;
    }
    if(arr[r] > arr[Max] and r<n){
        Max = r;
    }
    if(Max!=i){
        Swap(arr[i],arr[Max]);
        heapify(arr,Max,n);
    }
}
void buildMaxHeap(int arr[],int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}
class pqueue{
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
            buildMaxHeap(arr,s);
        }
    }
    void dequeue(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
        }
        else{
            Swap(arr[0],arr[s]);
            s--;
            buildMaxHeap(arr,s);
        }
    }
    int peek(){
        if(isEmpty()==1){
            cout<<"The queue is empty"<<endl;
            return INT_MAX;
        }
        else{
            return arr[0];
        }
    }
    void decreaseKey(int i,int p){
        arr[i] = p;
        heapify(arr,i,s+1);
    }
    void print(){
        for(int i=0;i<=s;i++){
            cout<<arr[i]<<" ";
        }cout<<endl;
    }
};

int main()
{
    class pqueue pq;
    pq.createNewQueue();
    pq.enqueue(3);
    pq.print();
    pq.enqueue(2);
    pq.print();
    pq.enqueue(5);
    pq.print();
    pq.dequeue();
    pq.print();
    pq.decreaseKey(0,1);
    pq.print();
    return 0;
}
