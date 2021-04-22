#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* link;
};
Node* head;
void Insert(int data) //To insert data to the beginning of list
{
    Node* temp = new Node();
	temp->data = data;
	temp->link = NULL;
	if(head!=NULL){
		temp->link=head;
	}
	head = temp;
    

}
void reverse(){ //Iterative method
    Node *current;
    Node *previous;
    Node *next;
    previous = NULL; //Initially set to NULL as there is nothing before head
    current = head;
    while(current!=NULL){
        next = current->link; 
        current->link = previous;
        previous = current;
        current = next;
    }
    head = previous;
}
void print(){
    cout<<"\n Elements in list are : ";
    Node* temp = new Node();
    temp = head;
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp = temp->link;
    }
    cout<<"\n";
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
    print();
    reverse();
    cout<<"\n After reversing Linked List: ";
    print();
}