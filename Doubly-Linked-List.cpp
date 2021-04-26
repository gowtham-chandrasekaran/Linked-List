// Includes Insertion at head and tail, Reverse printing and normal printing for doubly linked list
#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
    Node* prev;
};
Node* head;
struct Node* getNewNode(int x){
    Node* temp = new Node();
    temp->data = x;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}
void insertatHead(int x){
    Node* temp = getNewNode(x);
    if(head == NULL){
        head = temp;
        return;
    }
    else{
        head->prev = temp;
        temp->next = head;
        head = temp;
    }
}
void insertatTail(int x){
    Node* temp = getNewNode(x);
    if(head == NULL){
        head = temp;
        return;
    }
    else{
        Node* temp1 = new Node();
        temp1 = head;
        while(temp1->next!=NULL){
            temp1 = temp1->next;
        }
        temp1->next = temp;
        temp->prev = temp1;
    }
}
void print(){
    Node *temp = new Node();
    if(head == NULL){
        cout<<"\n Empty List ";
    }
    else{
        temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
    }
    cout<<"\n";
}
    
}
void reversePrint(){
    Node* temp = new Node();
    temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp = temp->prev;
    }
}
int main(){
    head = NULL;
    insertatHead(2); // 2
    insertatHead(4); // 4 2
    insertatTail(9); // 4 2 9
    print();
    reversePrint(); // 9 2 4
}