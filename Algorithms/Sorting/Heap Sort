#include <iostream>

using namespace std;

void Swap(int& a,int& b){
    int temp = a;
    a = b;
    b = temp;
}
void heapify(int* arr ,int i,int n){
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
void buildMaxHeap(int* arr,int n){
    for(int i=n/2-1;i>=0;i--){
        heapify(arr,i,n);
    }
}
int extractMax(int* arr,int n){
    buildMaxHeap(arr,n);
    return arr[0];
}
void heapSort(int arr[],int n){
    buildMaxHeap(arr,n);
    for(int i=1;i<n;i++){
        Swap(arr[0],arr[n-i]);
        heapify(arr,0,n-i);
    }
}
int main()
{
    int arr[] = {1,6,8,9,5,0};
    heapSort(arr,6);
    for(int i=0;i<6;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}
