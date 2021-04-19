#include<iostream>
using namespace std;
struct Node{
    int data;
    Node* next;
};
Node* head;
void Insert(int data) //To insert data to the end of list
{
    Node* temp = new Node();
	temp->data = data;
	temp->next = NULL;
	if(head!=NULL){
		temp->next=head;
	}
	head = temp;
    // Node* temp = new Node();
    // if(head == NULL){
        
    //     temp->data = data;
    //     temp->next = NULL;
    //     head = temp;
    // }
    // else{
        
    //     while(temp!=NULL){
    //         temp=temp->next;
    //     }
    //     temp->data = data;
    //     temp->next = NULL;
    // }
    

}
void Delete(int n){
    Node* temp = new Node();
    temp = head;
    if(n == 1){
        
        head = temp->next;
        delete temp;
        return;
    }
    else{
        for(int i=0;i<n-2;i++){
        temp = temp->next;
    }
    Node* temp1 = new Node();
    temp1 = temp->next;
    temp->next = temp1->next;
    delete temp1;
    }
    
}
void print(){
    cout<<"\n Elements in list are : ";
    Node* temp = new Node();
    temp = head;
    while(temp!=NULL){
        cout<<" "<<temp->data;
        temp = temp->next;
    }
    cout<<"\n";
}
int main(){
    head = NULL;
    int n,x;
    char flag;
    while(flag){
        cout<<"Enter element to insert: ";
        cin>>x;
        Insert(x);
        cout<<"Do you want to continue? Press 1 to continue else press 0 ";
        cin.ignore();
    }
    print();
    cout<<"\n Enter position to delete: ";
    cin>>n;
    Delete(n);
    print();
}