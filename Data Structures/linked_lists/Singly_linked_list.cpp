#include <iostream>

using namespace std;

struct node{
    int val;
    struct node* next;
};
class linked_list{
    node* head;
    int s; //size
public:
    void createNewLinkedList(){
        head = NULL;
        s = -1;
    }
    bool isEmpty(){
        if(s==-1){
            return 1;
        }
        else{
            return 0;
        }
    }
    void insert_at_front(int n){
        node* newnode = new node;
        newnode->val = n;
        newnode->next = NULL;
        if(isEmpty()==1){
            head = newnode;
        }
        else{
            newnode->next = head;
            head = newnode;
        }
        s++;
    }
    void insert_at_back(int n){
        node* newnode = new node;
        newnode->next = NULL;
        newnode->val = n;
        if(isEmpty()==1){
            head = newnode;
        }
        else{
            node* temp;
            temp = head;
            while(temp->next!=NULL){
                temp = temp->next;
            }
            temp->next = newnode;
        }
        s++;
    }
    void insert_after(int val,int n){
        node* newnode = new node;
        newnode->val = n;
        node* temp = head;
        while(temp->val!=val  and temp->next!=NULL){
            temp = temp->next;
        }
        if(temp->next == NULL and temp->val != val){
            cout<<"Given value is not in the list"<<endl;
            return;
        }
        newnode->next = temp->next;
        temp->next = newnode;
        s++;
    }
    void delete_after(int val){
        if(isEmpty()==1){
            cout<<"List is empty"<<endl;
            return;
        }
        node* temp = head;
        while(temp->val!=val and temp->next == NULL ){
            temp = temp->next;
        }
        if(temp->next == NULL and temp->val != val){
            cout<<"Given value is not in the list"<<endl;
            return;
        }
        node* t = temp->next;
        temp->next = temp->next->next;
        delete(t);
        s--;
    }
    void delete_front(){
        if(isEmpty()==1){
            cout<<"List is empty"<<endl;
            return;
        }
        node* temp = head;
        head = head->next;
        delete(temp);
        s--;
    }
    void delete_back(){
        if(isEmpty()==1){
            cout<<"List is empty"<<endl;
            return;
        }
        node* temp = head;
        while(temp->next->next!=NULL){
            temp = temp->next;
        }
        delete(temp->next);
        temp->next = NULL;
        s--;
    }
    void print(){
        node* temp = head;
        while(temp!=NULL){
            cout<<temp->val<<" ";
            temp = temp->next;
        }
    }
};
int main()
{
    class linked_list ll;
    ll.createNewLinkedList();
    ll.insert_at_front(2);
    ll.insert_at_front(1);
    ll.insert_after(2,3);
    ll.insert_at_back(4);
    ll.insert_at_back(5);
    ll.delete_front();
    ll.delete_back();
    ll.delete_after(2);
    ll.print();
    return 0;
}
