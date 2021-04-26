#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* head;
void Insert(int data) //To insert data to the end of list
{
    Node* temp = new Node();
    temp->data = data;
    temp->link = NULL;
    if(head == NULL){
        head = temp;
    }
    else{
        Node* temp1 = head;
        while(temp1->link!=NULL){
            temp1 = temp1->link;
        }
        temp1->link = temp;
    }

}
void reverseprint(Node* p){ //Recursive method to print in reverse order
    if(p == NULL){
        return;
    }
    reverseprint(p->link);
    cout<<p->data<<" ";
}
void print(Node* p){ //Recursive way of printing in forward order
    if(p == NULL){
        cout<<"\n";
        return;
    }
    cout<<p->data<<" ";
    print(p->link);
}
int main(){
    head = NULL;
    int n,x;
    int flag = 1;
    while(flag){
        cout<<"Enter element to insert: ";
        cin>>x;
        Insert(x);
        cout<<"Do you want to continue? Press 1 to continue else press 0 ";
        cin>>flag;
    }
    cout<<"\n Before reversing Linked List: ";
    print(head);
    cout<<"\n Reverse printing Linked List: ";
    reverseprint(head);
    cout<<"\n";
}